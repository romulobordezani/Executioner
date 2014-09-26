package com {

	import flash.display.MovieClip;
	import flash.events.MouseEvent;
	import flash.ui.Mouse;
	import flash.system.fscommand;
	import flash.filesystem.File;

	import com.periscopic.air.CommandLineProcess;
	import flash.display.Sprite;
	import flash.events.NativeProcessExitEvent;


	public class JsonButton extends MovieClip {

		public var commander:String;

		public function JsonButton() {

			var thiz:JsonButton = this;

			this.JsonButtonHitArea.addEventListener( MouseEvent.CLICK, function(){

				var command:CommandLineProcess = new CommandLineProcess();
				command.tracing();
				command.addEventListener(NativeProcessExitEvent.EXIT, handleExit, false, 0, true);
				command.run(commander);

			});

			this.JsonButtonHitArea.addEventListener( MouseEvent.MOUSE_OVER, function(){
				thiz.alpha = .7;
			});

			this.JsonButtonHitArea.addEventListener( MouseEvent.MOUSE_OUT, function(){
				thiz.alpha = 1;
			});

		}

		private function handleExit(e:NativeProcessExitEvent):void {
				//handle completion
		}



	}

}
