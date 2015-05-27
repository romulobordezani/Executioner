package com {

	import flash.display.MovieClip;
	import flash.events.MouseEvent;
	import flash.ui.Mouse;
	import flash.events.Event;
	import flash.net.URLLoader;
	import flash.net.URLRequest;

	public class WindowButtons extends MovieClip {

		public function WindowButtons(){
			bindAppMouseEvents();
			stage.nativeWindow.alwaysInFront = true;
		}

		private function bindAppMouseEvents(){

			this.drag.addEventListener( MouseEvent.MOUSE_DOWN, function(){
				stage.nativeWindow.startMove();
			});

			this.drag.addEventListener( MouseEvent.ROLL_OVER, function(){
				Mouse.cursor="hand";
			});

			this.drag.addEventListener( MouseEvent.ROLL_OUT, function(){
				Mouse.cursor="arrow";
			});

			this.bt_close.addEventListener( MouseEvent.CLICK, function(){
				stage.nativeWindow.close();
			});

			this.bt_minimize.addEventListener( MouseEvent.CLICK, function(){
				stage.nativeWindow.minimize();
			});

			this.bt_allwaysOnTop.addEventListener( MouseEvent.CLICK, function(){
				stage.nativeWindow.alwaysInFront = !stage.nativeWindow.alwaysInFront;
			});

		}
	}

}