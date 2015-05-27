package com {

	import flash.display.MovieClip;
	import flash.events.MouseEvent;
	import flash.system.fscommand;

	public class MainButtons extends MovieClip {

		public function MainButtons(){

			this.uolserve.addEventListener( MouseEvent.CLICK, function(){
				fscommand( "exec", "uolserve.bat" );
				trace('oi');
			});

			this.uoldist.addEventListener( MouseEvent.CLICK, function(){
				fscommand( "exec", "uoldist.bat" );
			});

			this.uoltest.addEventListener( MouseEvent.CLICK, function(){
				fscommand( "exec", "uoltest.bat" );
			});




			this.bolserve.addEventListener( MouseEvent.CLICK, function(){
				fscommand( "exec", "bolserve.bat" );
			});

			this.boldist.addEventListener( MouseEvent.CLICK, function(){
				fscommand( "exec", "boldist.bat" );
			});

			this.boltest.addEventListener( MouseEvent.CLICK, function(){
				fscommand( "exec", "boltest.bat" );
			});




			this.zipserve.addEventListener( MouseEvent.CLICK, function(){
				fscommand( "exec", "zipserve.bat" );
			});

			this.zipdist.addEventListener( MouseEvent.CLICK, function(){
				fscommand( "exec", "zipdist.bat" );
			});

			this.ziptest.addEventListener( MouseEvent.CLICK, function(){
				fscommand( "exec", "ziptest.bat" );
			});




			this.folhaserve.addEventListener( MouseEvent.CLICK, function(){
				fscommand( "exec", "folhaserve.bat" );
			});

			this.folhadist.addEventListener( MouseEvent.CLICK, function(){
				fscommand( "exec", "folhadist.bat" );
			});

			this.folhatest.addEventListener( MouseEvent.CLICK, function(){
				fscommand( "exec", "folhatest.bat" );
			});







			//===============================================================

			this.yocontroller.addEventListener( MouseEvent.CLICK, function(){
				fscommand( "exec", "yocontroller.bat" );
			});

			this.yodirective.addEventListener( MouseEvent.CLICK, function(){
				fscommand( "exec", "yodirective.bat" );
			});

			this.yoprovider.addEventListener( MouseEvent.CLICK, function(){
				fscommand( "exec", "yoprovider.bat" );
			});

			this.yoroute.addEventListener( MouseEvent.CLICK, function(){
				fscommand( "exec", "yoroute.bat" );
			});





			//===============================================================

			this.nodeinstall.addEventListener( MouseEvent.CLICK, function(){
				fscommand( "exec", "nodeinstall.bat" );
			});

			this.bowerinstall.addEventListener( MouseEvent.CLICK, function(){
				fscommand( "exec", "bowerinstall.bat" );
			});






			//===============================================================

			this.metaprodinstall.addEventListener( MouseEvent.CLICK, function(){
				fscommand( "exec", "metaprodinstall.bat" );
			});



		}

	}
}