/**
 * Copyright (c) 2011 Periscopic, Inc | http://periscopic.com
 *
 * Relased under Eclipse Public License:
 * http://opensource.org/licenses/eclipse-1.0.php
 *
 * ----------------------------------------------------
 *
 * Run system commands via a cpp based executable and Air 2 NativeProcess.
 * Cpp executable is compiled from cpp/com/periscopic/air/CommandLineProxy.cpp
 * Executable is included in system specific executable (EXE/DMG) in
 * the NativeProcesses folder.
 *
 * ----------------------------------------------------
 * Usage:
 *
 * var process:CommandLineProcess = new CommandLineProcess();
 * process.addEventListener(NativeProcessExitEvent.EXIT,handleExit,false,0,true);
 * process.run("ditto fileA.txt fileB.txt"); //use unix ditto command to copy fileA.txt
 *
 *
 * @author brett johnson
 * @see http://now.periscopic.com/2011/01/adobe-air-and-the-command-line/
 */

package com.periscopic.air {

﻿  import com.periscopic.utils.Retainer;
﻿  import flash.desktop.NativeProcess;
﻿  import flash.desktop.NativeProcessStartupInfo;
﻿  import flash.events.Event;
﻿  import flash.events.EventDispatcher;
﻿  import flash.events.IEventDispatcher;
﻿  import flash.events.IOErrorEvent;
﻿  import flash.events.NativeProcessExitEvent;
﻿  import flash.events.ProgressEvent;
﻿  import flash.filesystem.File;

﻿  //--Debugging class based on the class from BigSpaceShip,
﻿  //--removed as a dependency, but highly recommended.
﻿  //import com.periscopic.utils.Out;﻿
﻿  public class CommandLineProcess extends EventDispatcher
﻿  {
﻿  ﻿  static private var _retainer:Retainer = new Retainer();

﻿  ﻿  private var _tracing:Boolean;

﻿  ﻿  private var _process:NativeProcess;
﻿  ﻿  private var _running:Boolean;

﻿  ﻿  public function CommandLineProcess() {
﻿  ﻿  ﻿  super();
﻿  ﻿  ﻿  _process=new NativeProcess();
﻿  ﻿  }

﻿  ﻿  public function get process():NativeProcess {
﻿  ﻿  ﻿  return _process;
﻿  ﻿  }

﻿  ﻿  /*
﻿  ﻿   * Note that you must escape certain characters
﻿  ﻿   * in the command.
﻿  ﻿   * This '/Desktop/hello world.txt' file path
﻿  ﻿   * becomes '/Desktop/hello\\ world.txt'
﻿  ﻿   */
﻿  ﻿  public function run(command:String):void {
﻿  ﻿  ﻿  //don't allow
﻿  ﻿  ﻿  if (_running) {
﻿  ﻿  ﻿  ﻿  throw new Error("CommandLineProcess is currently busy");
﻿  ﻿  ﻿  ﻿  return;
﻿  ﻿  ﻿  }
﻿  ﻿  ﻿  _running=true;

﻿  ﻿  ﻿  //block garbage collection
﻿  ﻿  ﻿  _retainer.retain(this);

﻿  ﻿  ﻿  var nativeProcessStartupInfo:NativeProcessStartupInfo = new NativeProcessStartupInfo();
﻿  ﻿  ﻿  var processArgs:Vector.<String> = new Vector.<String>();

﻿  ﻿  ﻿  //use C++ executable to relay commands
﻿  ﻿  ﻿  var file:File = File.applicationDirectory.resolvePath("NativeApps/CommandLineProxy/CommandLineProxy.exe");
﻿  ﻿  ﻿  nativeProcessStartupInfo.executable=file;
﻿  ﻿  ﻿  processArgs[0]=command;
﻿  ﻿  ﻿  nativeProcessStartupInfo.arguments=processArgs;

﻿  ﻿  ﻿  //run process and listen to feedback﻿  ﻿
﻿  ﻿  ﻿  _process.addEventListener(ProgressEvent.STANDARD_OUTPUT_DATA, relay, false, 0, true);
﻿  ﻿  ﻿  _process.addEventListener(ProgressEvent.STANDARD_ERROR_DATA, relay, false, 0, true);
﻿  ﻿  ﻿  _process.addEventListener(NativeProcessExitEvent.EXIT, relay, false, 0, true);
﻿  ﻿  ﻿  _process.addEventListener(NativeProcessExitEvent.EXIT, handleExit, false, int.MIN_VALUE, true);
﻿  ﻿  ﻿  _process.addEventListener(IOErrorEvent.STANDARD_OUTPUT_IO_ERROR, relay, false, 0, true);
﻿  ﻿  ﻿  _process.addEventListener(IOErrorEvent.STANDARD_ERROR_IO_ERROR, relay, false, 0, true);
﻿  ﻿  ﻿  _process.start(nativeProcessStartupInfo);
﻿  ﻿  }

﻿  ﻿  public function get running():Boolean {
﻿  ﻿  ﻿  return _running;
﻿  ﻿  }

﻿  ﻿  public function tracing():void {
﻿  ﻿  ﻿  if (_tracing)
﻿  ﻿  ﻿  ﻿  return;
﻿  ﻿  ﻿  _tracing=true;
﻿  ﻿  ﻿  _process.addEventListener(ProgressEvent.STANDARD_OUTPUT_DATA, onOutputData, false, 0, true);
﻿  ﻿  ﻿  _process.addEventListener(ProgressEvent.STANDARD_ERROR_DATA, onErrorData, false, 0, true);
﻿  ﻿  ﻿  _process.addEventListener(NativeProcessExitEvent.EXIT, onExit, false, 0, true);
﻿  ﻿  ﻿  _process.addEventListener(IOErrorEvent.STANDARD_OUTPUT_IO_ERROR, onIOError, false, 0, true);
﻿  ﻿  ﻿  _process.addEventListener(IOErrorEvent.STANDARD_ERROR_IO_ERROR, onIOError, false, 0, true);
﻿  ﻿  }

﻿  ﻿  private function handleExit(e:Event):void {
﻿  ﻿  ﻿  //allow garbage collection or reuse
﻿  ﻿  ﻿  _retainer.release(this);
﻿  ﻿  ﻿  _process=null;
﻿  ﻿  ﻿  _running=false;
﻿  ﻿  }

﻿  ﻿  private function onErrorData(event:ProgressEvent):void {
﻿  ﻿  ﻿  //Out.error(this, _process.standardError.readUTFBytes(_process.standardError.bytesAvailable));
﻿  ﻿  ﻿  trace(_process.standardError.readUTFBytes(_process.standardError.bytesAvailable));
﻿  ﻿  }

﻿  ﻿  private function onExit(event:NativeProcessExitEvent):void {
﻿  ﻿  ﻿  //Out.status(this, "Process exited with ", event.exitCode);
﻿  ﻿  ﻿  trace("Process exited with ", event.exitCode);

﻿  ﻿  }

﻿  ﻿  private function onIOError(event:IOErrorEvent):void {
﻿  ﻿  ﻿  //Out.error(this, event.toString());
﻿  ﻿  ﻿  trace(event.toString());
﻿  ﻿  }

﻿  ﻿  private function onOutputData(event:ProgressEvent):void {
﻿  ﻿  ﻿  //Out.info(this, "Output", _process.standardOutput.readUTFBytes(_process.standardOutput.bytesAvailable));
﻿  ﻿  ﻿  trace("Output", _process.standardOutput.readUTFBytes(_process.standardOutput.bytesAvailable));
﻿  ﻿  }

﻿  ﻿  //pass events along
﻿  ﻿  private function relay(e:Event):void {
﻿  ﻿  ﻿  this.dispatchEvent(e);
﻿  ﻿  }
﻿  }
}