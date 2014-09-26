package com {

	import flash.display.MovieClip;
	import flash.events.MouseEvent;
	import flash.ui.Mouse;
	import flash.events.Event;
	import flash.net.URLLoader;
	import flash.net.URLRequest;
	import com.JsonButton;

	public class ScriptExecutor extends MovieClip {

		public function ScriptExecutor(){
			bindAppMouseEvents();
			loadConfigFromUrl();
			stage.nativeWindow.alwaysInFront = true;
		}


		private function bindAppMouseEvents(){

			this.bg.bg_in.drag.addEventListener( MouseEvent.MOUSE_DOWN, function(){
				stage.nativeWindow.startMove();
			});

			this.bg.bg_in.drag.addEventListener( MouseEvent.ROLL_OVER, function(){
				Mouse.cursor="hand";
			});

			this.bg.bg_in.drag.addEventListener( MouseEvent.ROLL_OUT, function(){
				Mouse.cursor="arrow";
			});

			this.bg.bg_in.bt_close.addEventListener( MouseEvent.CLICK, function(){
				stage.nativeWindow.close();
			});

			this.bg.bg_in.bt_minimize.addEventListener( MouseEvent.CLICK, function(){
				stage.nativeWindow.minimize();
			});

			this.bg.bg_in.bt_allwaysOnTop.addEventListener( MouseEvent.CLICK, function(){
				stage.nativeWindow.alwaysInFront = !stage.nativeWindow.alwaysInFront;
			});

		}


		private function loadConfigFromUrl():void {

		    var urlRequest:URLRequest  = new URLRequest('batchList.json');

		    var urlLoader:URLLoader = new URLLoader();
		    urlLoader.addEventListener(Event.COMPLETE, completeHandler);

		    try{
		        urlLoader.load(urlRequest);
		    } catch (error:Error) {
		        trace("Cannot load : " + error.message);
		    }


		}

		private function completeHandler(event:Event):void {

		    var loader:URLLoader = URLLoader(event.target);
		    var data:Object = JSON.parse(loader.data);

		    mountBatchLinks(data);

		}


		private function mountBatchLinks(data:Object):void{

			var jsonButton = new MovieClip;
			var SPACE_BETWEEN:int = 0;

	    	for (var item:String in data) {
	    		jsonButton = new JsonButton;
	    		jsonButton.label.text = item;
	    		jsonButton.commander = data[item];
	    		jsonButton.y = SPACE_BETWEEN;
	    		bts.bt_in.addChild(jsonButton);
	    		SPACE_BETWEEN += 40;
	    	}
		}



	}



}