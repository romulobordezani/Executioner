package com.periscopic.utils
{

﻿  /**
﻿   * Copyright (c) 2011 Periscopic, Inc | http://periscopic.com
﻿   *
﻿   * Relased under Eclipse Public License:
﻿   * http://opensource.org/licenses/eclipse-1.0.php
﻿   *
﻿   * ----------------------------------------------------
﻿   *
﻿   * Creates references for items that would otherwise be Garbage-Collected
﻿   * so they can dictate when they are finished with their usefulness and
﻿   * ready to be swept away. Simulates memory management in Obj-C.
﻿   *
﻿   * Store instance of retainer in a static var.
﻿   *
﻿   * ----------------------------------------------------
﻿   * Usage:
﻿   *
﻿   * static private var _retainer:Retainer = new Retainer();
﻿   *
﻿   * //block garbage collection of foo
﻿   * _retainer.retain(foo);
﻿   * //allow garbage collection or reuse foo
﻿   * _retainer.release(foo);
﻿   *
﻿   * ----------------------------------------------------
﻿   *
﻿   * @author brett johnson
﻿   */
﻿  public class Retainer
﻿  {
﻿  ﻿  private var _safe:Array;

﻿  ﻿  public function Retainer() {
﻿  ﻿  ﻿  _safe=[];
﻿  ﻿  }

﻿  ﻿  /**
﻿  ﻿   * Allow a retained instance to be garbage collected.
﻿  ﻿   * Decrements the retain 'count' for the instance.
﻿  ﻿   * @param o : * - the instance to release.
﻿  ﻿   * @return void
﻿  ﻿   **/
﻿  ﻿  public function release(o:*):void {
﻿  ﻿  ﻿  var i:int=_safe.indexOf(o);

﻿  ﻿  ﻿  if (i >= 0)
﻿  ﻿  ﻿  ﻿  _safe.splice(i, 1);
﻿  ﻿  }

﻿  ﻿  /**
﻿  ﻿   * Prevent an instance from being garbage collected.
﻿  ﻿   * Increments the retain 'count' for the instance.
﻿  ﻿   * @param o : * - the instance to retain.
﻿  ﻿   * @return void
﻿  ﻿   **/
﻿  ﻿  public function retain(o:*):void {
﻿  ﻿  ﻿  _safe[_safe.length]=o;
﻿  ﻿  }
﻿  }
}