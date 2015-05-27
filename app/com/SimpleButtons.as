package com {

	import flash.display.MovieClip;
	import flash.events.MouseEvent;
	import flash.ui.Mouse;
	import flash.events.Event;

	public class SimpleButtons extends MovieClip {

		public function SimpleButtons(){
			this.bindAppMouseEvents();
		}

		private function bindAppMouseEvents(){
			
			this.addEventListener( MouseEvent.ROLL_OVER, function(){
				Mouse.cursor="button";
			});

			this.addEventListener( MouseEvent.ROLL_OUT, function(){
				Mouse.cursor="arrow";
			});

		}




	}



}