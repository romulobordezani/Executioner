



<!DOCTYPE html>
<html>
<head>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" >
 <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" >
 
 <meta name="ROBOTS" content="NOARCHIVE">
 
 <link rel="icon" type="image/vnd.microsoft.icon" href="https://ssl.gstatic.com/codesite/ph/images/phosting.ico">
 
 
 <script type="text/javascript">
 
 (function(){(function(){function c(a){this.t={};this.tick=function(a,b,c){b=void 0!=c?c:(new Date).getTime();this.t[a]=b;if(void 0==c)try{window.console.timeStamp("CSI/"+a)}catch(d){}};this.tick("start",null,a)}var a;window.performance&&(a=window.performance.timing);var b=a?new c(a.responseStart):new c;window.jstiming={Timer:c,load:b};a&&(b=a.navigationStart,a=a.responseStart,0<b&&a>=b&&(window.jstiming.srt=a-b));try{a=null,window.chrome&&window.chrome.csi&&(a=Math.floor(window.chrome.csi().pageT)),null==a&&
window.gtbExternal&&(a=window.gtbExternal.pageT()),null==a&&window.external&&(a=window.external.pageT),a&&(window.jstiming.pt=a)}catch(d){}})();})();

 
 
 
 
 var codesite_token = "ABZ6GAecgZkU8j9hbqg4MTBFE2ANij8aZA:1411091398712";
 
 
 var CS_env = {"token": "ABZ6GAecgZkU8j9hbqg4MTBFE2ANij8aZA:1411091398712", "profileUrl": "/u/104483918654914497308/", "projectName": "periscopic", "projectHomeUrl": "/p/periscopic", "assetHostPath": "https://ssl.gstatic.com/codesite/ph", "loggedInUserEmail": "romulobordezani@gmail.com", "assetVersionPath": "https://ssl.gstatic.com/codesite/ph/16315335801608708296", "domainName": null, "relativeBaseUrl": ""};
 var _gaq = _gaq || [];
 _gaq.push(
 ['siteTracker._setAccount', 'UA-18071-1'],
 ['siteTracker._trackPageview']);
 
 (function() {
 var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
 ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
 (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(ga);
 })();
 
 </script>
 
 
 <title>CommandLineProxy.cpp - 
 periscopic -
 
 
 Periscopic open-source code repository - Google Project Hosting
 </title>
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/16315335801608708296/css/core.css">
 
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/16315335801608708296/css/ph_detail.css" >
 
 
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/16315335801608708296/css/d_sb.css" >
 
 
 
<!--[if IE]>
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/16315335801608708296/css/d_ie.css" >
<![endif]-->
 <style type="text/css">
 .menuIcon.off { background: no-repeat url(https://ssl.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -42px }
 .menuIcon.on { background: no-repeat url(https://ssl.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -28px }
 .menuIcon.down { background: no-repeat url(https://ssl.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 0; }
 
 
 
  tr.inline_comment {
 background: #fff;
 vertical-align: top;
 }
 div.draft, div.published {
 padding: .3em;
 border: 1px solid #999; 
 margin-bottom: .1em;
 font-family: arial, sans-serif;
 max-width: 60em;
 }
 div.draft {
 background: #ffa;
 } 
 div.published {
 background: #e5ecf9;
 }
 div.published .body, div.draft .body {
 padding: .5em .1em .1em .1em;
 max-width: 60em;
 white-space: pre-wrap;
 white-space: -moz-pre-wrap;
 white-space: -pre-wrap;
 white-space: -o-pre-wrap;
 word-wrap: break-word;
 font-size: 1em;
 }
 div.draft .actions {
 margin-left: 1em;
 font-size: 90%;
 }
 div.draft form {
 padding: .5em .5em .5em 0;
 }
 div.draft textarea, div.published textarea {
 width: 95%;
 height: 10em;
 font-family: arial, sans-serif;
 margin-bottom: .5em;
 }

 
 .nocursor, .nocursor td, .cursor_hidden, .cursor_hidden td {
 background-color: white;
 height: 2px;
 }
 .cursor, .cursor td {
 background-color: darkblue;
 height: 2px;
 display: '';
 }
 
 
.list {
 border: 1px solid white;
 border-bottom: 0;
}

 
 </style>
</head>
<body class="t4">
<script type="text/javascript">
 window.___gcfg = {lang: 'en'};
 (function() 
 {var po = document.createElement("script");
 po.type = "text/javascript"; po.async = true;po.src = "https://apis.google.com/js/plusone.js";
 var s = document.getElementsByTagName("script")[0];
 s.parentNode.insertBefore(po, s);
 })();
</script>
<div class="headbg">

 <div id="gaia">
 

 <span>
 
 
 
 <a href="#" id="multilogin-dropdown" onclick="return false;"
 ><u><b>romulobordezani@gmail.com</b></u> <small>&#9660;</small></a>
 
 
 | <a href="/u/104483918654914497308/" id="projects-dropdown" onclick="return false;"
 ><u>My favorites</u> <small>&#9660;</small></a>
 | <a href="/u/104483918654914497308/" onclick="_CS_click('/gb/ph/profile');"
 title="Profile, Updates, and Settings"
 ><u>Profile</u></a>
 | <a href="https://www.google.com/accounts/Logout?continue=https%3A%2F%2Fcode.google.com%2Fp%2Fperiscopic%2Fsource%2Fbrowse%2Ftrunk%2Fcpp%2Fcom%2Fperiscopic%2Fair%2FCommandLineProxy.cpp" 
 onclick="_CS_click('/gb/ph/signout');"
 ><u>Sign out</u></a>
 
 </span>

 </div>

 <div class="gbh" style="left: 0pt;"></div>
 <div class="gbh" style="right: 0pt;"></div>
 
 
 <div style="height: 1px"></div>
<!--[if lte IE 7]>
<div style="text-align:center;">
Your version of Internet Explorer is not supported. Try a browser that
contributes to open source, such as <a href="http://www.firefox.com">Firefox</a>,
<a href="http://www.google.com/chrome">Google Chrome</a>, or
<a href="http://code.google.com/chrome/chromeframe/">Google Chrome Frame</a>.
</div>
<![endif]-->



 <table style="padding:0px; margin: 0px 0px 10px 0px; width:100%" cellpadding="0" cellspacing="0"
 itemscope itemtype="http://schema.org/CreativeWork">
 <tr style="height: 58px;">
 
 
 
 <td id="plogo">
 <link itemprop="url" href="/p/periscopic">
 <a href="/p/periscopic/">
 
 
 <img src="/p/periscopic/logo?cct=0"
 alt="Logo" itemprop="image">
 
 </a>
 </td>
 
 <td style="padding-left: 0.5em">
 
 <div id="pname">
 <a href="/p/periscopic/"><span itemprop="name">periscopic</span></a>
 </div>
 
 <div id="psum">
 <a id="project_summary_link"
 href="/p/periscopic/"><span itemprop="description">Periscopic open-source code repository</span></a>
 
 </div>
 
 
 </td>
 <td style="white-space:nowrap;text-align:right; vertical-align:bottom;">
 
 <form action="/hosting/search">
 <input size="30" name="q" value="" type="text">
 
 <input type="submit" name="projectsearch" value="Search projects" >
 </form>
 
 </tr>
 </table>

</div>

 
<div id="mt" class="gtb"> 
 <a href="/p/periscopic/" class="tab ">Project&nbsp;Home</a>
 
 
 
 
 
 
 <a href="/p/periscopic/w/list" class="tab ">Wiki</a>
 
 
 
 
 
 <a href="/p/periscopic/issues/list"
 class="tab ">Issues</a>
 
 
 
 
 
 <a href="/p/periscopic/source/checkout"
 class="tab active">Source</a>
 
 
 
 
 
 
 
 
 <div class=gtbc></div>
</div>
<table cellspacing="0" cellpadding="0" width="100%" align="center" border="0" class="st">
 <tr>
 
 
 
 
 
 
 <td class="subt">
 <div class="st2">
 <div class="isf">
 
 


 <span class="inst1"><a href="/p/periscopic/source/checkout">Checkout</a></span> &nbsp;
 <span class="inst2"><a href="/p/periscopic/source/browse/">Browse</a></span> &nbsp;
 <span class="inst3"><a href="/p/periscopic/source/list">Changes</a></span> &nbsp;
 
 
 
 
 
 
 
 </form>
 <script type="text/javascript">
 
 function codesearchQuery(form) {
 var query = document.getElementById('q').value;
 if (query) { form.action += '%20' + query; }
 }
 </script>
 </div>
</div>

 </td>
 
 
 
 <td align="right" valign="top" class="bevel-right"></td>
 </tr>
</table>


<script type="text/javascript">
 var cancelBubble = false;
 function _go(url) { document.location = url; }
</script>
<div id="maincol"
 
>

 




<div class="expand">
<div id="colcontrol">
<style type="text/css">
 #file_flipper { white-space: nowrap; padding-right: 2em; }
 #file_flipper.hidden { display: none; }
 #file_flipper .pagelink { color: #0000CC; text-decoration: underline; }
 #file_flipper #visiblefiles { padding-left: 0.5em; padding-right: 0.5em; }
</style>
<table id="nav_and_rev" class="list"
 cellpadding="0" cellspacing="0" width="100%">
 <tr>
 
 <td nowrap="nowrap" class="src_crumbs src_nav" width="33%">
 <strong class="src_nav">Source path:&nbsp;</strong>
 <span id="crumb_root">
 
 <a href="/p/periscopic/source/browse/">svn</a>/&nbsp;</span>
 <span id="crumb_links" class="ifClosed"><a href="/p/periscopic/source/browse/trunk/">trunk</a><span class="sp">/&nbsp;</span><a href="/p/periscopic/source/browse/trunk/cpp/">cpp</a><span class="sp">/&nbsp;</span><a href="/p/periscopic/source/browse/trunk/cpp/com/">com</a><span class="sp">/&nbsp;</span><a href="/p/periscopic/source/browse/trunk/cpp/com/periscopic/">periscopic</a><span class="sp">/&nbsp;</span><a href="/p/periscopic/source/browse/trunk/cpp/com/periscopic/air/">air</a><span class="sp">/&nbsp;</span>CommandLineProxy.cpp</span>
 
 


 </td>
 
 
 <td nowrap="nowrap" width="33%" align="center">
 <a href="/p/periscopic/source/browse/trunk/cpp/com/periscopic/air/CommandLineProxy.cpp?edit=1"
 ><img src="https://ssl.gstatic.com/codesite/ph/images/pencil-y14.png"
 class="edit_icon">Edit file</a>
 </td>
 
 
 <td nowrap="nowrap" width="33%" align="right">
 <table cellpadding="0" cellspacing="0" style="font-size: 100%"><tr>
 
 
 <td class="flipper"><b>r8</b></td>
 
 </tr></table>
 </td> 
 </tr>
</table>

<div class="fc">
 
 
 
<style type="text/css">
.undermouse span {
 background-image: url(https://ssl.gstatic.com/codesite/ph/images/comments.gif); }
</style>
<table class="opened" id="review_comment_area"
><tr>
<td id="nums">
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
<pre><table width="100%" id="nums_table_0"><tr id="gr_svn8_1"

><td id="1"><a href="#1">1</a></td></tr
><tr id="gr_svn8_2"

><td id="2"><a href="#2">2</a></td></tr
><tr id="gr_svn8_3"

><td id="3"><a href="#3">3</a></td></tr
><tr id="gr_svn8_4"

><td id="4"><a href="#4">4</a></td></tr
><tr id="gr_svn8_5"

><td id="5"><a href="#5">5</a></td></tr
><tr id="gr_svn8_6"

><td id="6"><a href="#6">6</a></td></tr
><tr id="gr_svn8_7"

><td id="7"><a href="#7">7</a></td></tr
><tr id="gr_svn8_8"

><td id="8"><a href="#8">8</a></td></tr
><tr id="gr_svn8_9"

><td id="9"><a href="#9">9</a></td></tr
><tr id="gr_svn8_10"

><td id="10"><a href="#10">10</a></td></tr
><tr id="gr_svn8_11"

><td id="11"><a href="#11">11</a></td></tr
><tr id="gr_svn8_12"

><td id="12"><a href="#12">12</a></td></tr
><tr id="gr_svn8_13"

><td id="13"><a href="#13">13</a></td></tr
><tr id="gr_svn8_14"

><td id="14"><a href="#14">14</a></td></tr
><tr id="gr_svn8_15"

><td id="15"><a href="#15">15</a></td></tr
><tr id="gr_svn8_16"

><td id="16"><a href="#16">16</a></td></tr
><tr id="gr_svn8_17"

><td id="17"><a href="#17">17</a></td></tr
><tr id="gr_svn8_18"

><td id="18"><a href="#18">18</a></td></tr
><tr id="gr_svn8_19"

><td id="19"><a href="#19">19</a></td></tr
><tr id="gr_svn8_20"

><td id="20"><a href="#20">20</a></td></tr
><tr id="gr_svn8_21"

><td id="21"><a href="#21">21</a></td></tr
><tr id="gr_svn8_22"

><td id="22"><a href="#22">22</a></td></tr
><tr id="gr_svn8_23"

><td id="23"><a href="#23">23</a></td></tr
><tr id="gr_svn8_24"

><td id="24"><a href="#24">24</a></td></tr
><tr id="gr_svn8_25"

><td id="25"><a href="#25">25</a></td></tr
></table></pre>
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
</td>
<td id="lines">
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
<pre class="prettyprint lang-cpp"><table id="src_table_0"><tr
id=sl_svn8_1

><td class="source">  //For use with as3/com/periscopic/air/CommandLineProcess.as<br></td></tr
><tr
id=sl_svn8_2

><td class="source"><br></td></tr
><tr
id=sl_svn8_3

><td class="source">   #include &lt;iostream&gt;<br></td></tr
><tr
id=sl_svn8_4

><td class="source">   #include &lt;string&gt;<br></td></tr
><tr
id=sl_svn8_5

><td class="source">   #include &lt;stdlib.h&gt;<br></td></tr
><tr
id=sl_svn8_6

><td class="source"><br></td></tr
><tr
id=sl_svn8_7

><td class="source">   using namespace std;<br></td></tr
><tr
id=sl_svn8_8

><td class="source"><br></td></tr
><tr
id=sl_svn8_9

><td class="source">   int main(int argc, char* argv[]) {<br></td></tr
><tr
id=sl_svn8_10

><td class="source"><br></td></tr
><tr
id=sl_svn8_11

><td class="source">   string argString;<br></td></tr
><tr
id=sl_svn8_12

><td class="source">   const char* space=&quot; &quot;;<br></td></tr
><tr
id=sl_svn8_13

><td class="source"><br></td></tr
><tr
id=sl_svn8_14

><td class="source">   for (int i = 1; i &lt; argc; ++i) {<br></td></tr
><tr
id=sl_svn8_15

><td class="source">   if(i==1){<br></td></tr
><tr
id=sl_svn8_16

><td class="source">   argString=argv[i];<br></td></tr
><tr
id=sl_svn8_17

><td class="source">   }else{<br></td></tr
><tr
id=sl_svn8_18

><td class="source">   argString.append(space);<br></td></tr
><tr
id=sl_svn8_19

><td class="source">   argString.append(argv[i]);<br></td></tr
><tr
id=sl_svn8_20

><td class="source">   }<br></td></tr
><tr
id=sl_svn8_21

><td class="source">   }<br></td></tr
><tr
id=sl_svn8_22

><td class="source"><br></td></tr
><tr
id=sl_svn8_23

><td class="source">   system(argString.data());<br></td></tr
><tr
id=sl_svn8_24

><td class="source">   return 0;<br></td></tr
><tr
id=sl_svn8_25

><td class="source">   }<br></td></tr
></table></pre>
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
</td>
</tr></table>

 
<script type="text/javascript">
 var lineNumUnderMouse = -1;
 
 function gutterOver(num) {
 gutterOut();
 var newTR = document.getElementById('gr_svn8_' + num);
 if (newTR) {
 newTR.className = 'undermouse';
 }
 lineNumUnderMouse = num;
 }
 function gutterOut() {
 if (lineNumUnderMouse != -1) {
 var oldTR = document.getElementById(
 'gr_svn8_' + lineNumUnderMouse);
 if (oldTR) {
 oldTR.className = '';
 }
 lineNumUnderMouse = -1;
 }
 }
 var numsGenState = {table_base_id: 'nums_table_'};
 var srcGenState = {table_base_id: 'src_table_'};
 var alignerRunning = false;
 var startOver = false;
 function setLineNumberHeights() {
 if (alignerRunning) {
 startOver = true;
 return;
 }
 numsGenState.chunk_id = 0;
 numsGenState.table = document.getElementById('nums_table_0');
 numsGenState.row_num = 0;
 if (!numsGenState.table) {
 return; // Silently exit if no file is present.
 }
 srcGenState.chunk_id = 0;
 srcGenState.table = document.getElementById('src_table_0');
 srcGenState.row_num = 0;
 alignerRunning = true;
 continueToSetLineNumberHeights();
 }
 function rowGenerator(genState) {
 if (genState.row_num < genState.table.rows.length) {
 var currentRow = genState.table.rows[genState.row_num];
 genState.row_num++;
 return currentRow;
 }
 var newTable = document.getElementById(
 genState.table_base_id + (genState.chunk_id + 1));
 if (newTable) {
 genState.chunk_id++;
 genState.row_num = 0;
 genState.table = newTable;
 return genState.table.rows[0];
 }
 return null;
 }
 var MAX_ROWS_PER_PASS = 1000;
 function continueToSetLineNumberHeights() {
 var rowsInThisPass = 0;
 var numRow = 1;
 var srcRow = 1;
 while (numRow && srcRow && rowsInThisPass < MAX_ROWS_PER_PASS) {
 numRow = rowGenerator(numsGenState);
 srcRow = rowGenerator(srcGenState);
 rowsInThisPass++;
 if (numRow && srcRow) {
 if (numRow.offsetHeight != srcRow.offsetHeight) {
 numRow.firstChild.style.height = srcRow.offsetHeight + 'px';
 }
 }
 }
 if (rowsInThisPass >= MAX_ROWS_PER_PASS) {
 setTimeout(continueToSetLineNumberHeights, 10);
 } else {
 alignerRunning = false;
 if (startOver) {
 startOver = false;
 setTimeout(setLineNumberHeights, 500);
 }
 }
 }
 function initLineNumberHeights() {
 // Do 2 complete passes, because there can be races
 // between this code and prettify.
 startOver = true;
 setTimeout(setLineNumberHeights, 250);
 window.onresize = setLineNumberHeights;
 }
 initLineNumberHeights();
</script>

 
 
 <div id="log">
 <div style="text-align:right">
 <a class="ifCollapse" href="#" onclick="_toggleMeta(this); return false">Show details</a>
 <a class="ifExpand" href="#" onclick="_toggleMeta(this); return false">Hide details</a>
 </div>
 <div class="ifExpand">
 
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="changelog">
 <p>Change log</p>
 <div>
 <a href="/p/periscopic/source/detail?spec=svn8&amp;r=6">r6</a>
 by dev.periscopic
 on Oct 18, 2010
 &nbsp; <a href="/p/periscopic/source/diff?spec=svn8&r=6&amp;format=side&amp;path=/trunk/cpp/com/periscopic/air/CommandLineProxy.cpp&amp;old_path=/trunk/cpp/com/periscopic/air/CommandLineProxy.cpp&amp;old=">Diff</a>
 </div>
 <pre>Add CommandLineProcess</pre>
 </div>
 
 
 
 
 
 
 <script type="text/javascript">
 var detail_url = '/p/periscopic/source/detail?r=6&spec=svn8';
 var publish_url = '/p/periscopic/source/detail?r=6&spec=svn8#publish';
 // describe the paths of this revision in javascript.
 var changed_paths = [];
 var changed_urls = [];
 
 changed_paths.push('/trunk/as3/com/periscopic/air');
 changed_urls.push('/p/periscopic/source/browse/trunk/as3/com/periscopic/air?r\x3d6\x26spec\x3dsvn8');
 
 
 changed_paths.push('/trunk/as3/com/periscopic/air/CommandLineProcess.as');
 changed_urls.push('/p/periscopic/source/browse/trunk/as3/com/periscopic/air/CommandLineProcess.as?r\x3d6\x26spec\x3dsvn8');
 
 
 changed_paths.push('/trunk/cpp');
 changed_urls.push('/p/periscopic/source/browse/trunk/cpp?r\x3d6\x26spec\x3dsvn8');
 
 
 changed_paths.push('/trunk/cpp/com');
 changed_urls.push('/p/periscopic/source/browse/trunk/cpp/com?r\x3d6\x26spec\x3dsvn8');
 
 
 changed_paths.push('/trunk/cpp/com/periscopic');
 changed_urls.push('/p/periscopic/source/browse/trunk/cpp/com/periscopic?r\x3d6\x26spec\x3dsvn8');
 
 
 changed_paths.push('/trunk/cpp/com/periscopic/air');
 changed_urls.push('/p/periscopic/source/browse/trunk/cpp/com/periscopic/air?r\x3d6\x26spec\x3dsvn8');
 
 
 changed_paths.push('/trunk/cpp/com/periscopic/air/CommandLineProxy.cpp');
 changed_urls.push('/p/periscopic/source/browse/trunk/cpp/com/periscopic/air/CommandLineProxy.cpp?r\x3d6\x26spec\x3dsvn8');
 
 var selected_path = '/trunk/cpp/com/periscopic/air/CommandLineProxy.cpp';
 
 
 function getCurrentPageIndex() {
 for (var i = 0; i < changed_paths.length; i++) {
 if (selected_path == changed_paths[i]) {
 return i;
 }
 }
 }
 function getNextPage() {
 var i = getCurrentPageIndex();
 if (i < changed_paths.length - 1) {
 return changed_urls[i + 1];
 }
 return null;
 }
 function getPreviousPage() {
 var i = getCurrentPageIndex();
 if (i > 0) {
 return changed_urls[i - 1];
 }
 return null;
 }
 function gotoNextPage() {
 var page = getNextPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoPreviousPage() {
 var page = getPreviousPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoDetailPage() {
 window.location = detail_url;
 }
 function gotoPublishPage() {
 window.location = publish_url;
 }
</script>

 
 <style type="text/css">
 #review_nav {
 border-top: 3px solid white;
 padding-top: 6px;
 margin-top: 1em;
 }
 #review_nav td {
 vertical-align: middle;
 }
 #review_nav select {
 margin: .5em 0;
 }
 </style>
 <div id="review_nav">
 <table><tr><td>Go to:&nbsp;</td><td>
 <select name="files_in_rev" onchange="window.location=this.value">
 
 <option value="/p/periscopic/source/browse/trunk/as3/com/periscopic/air?r=6&amp;spec=svn8"
 
 >/trunk/as3/com/periscopic/air</option>
 
 <option value="/p/periscopic/source/browse/trunk/as3/com/periscopic/air/CommandLineProcess.as?r=6&amp;spec=svn8"
 
 >...scopic/air/CommandLineProcess.as</option>
 
 <option value="/p/periscopic/source/browse/trunk/cpp?r=6&amp;spec=svn8"
 
 >/trunk/cpp</option>
 
 <option value="/p/periscopic/source/browse/trunk/cpp/com?r=6&amp;spec=svn8"
 
 >/trunk/cpp/com</option>
 
 <option value="/p/periscopic/source/browse/trunk/cpp/com/periscopic?r=6&amp;spec=svn8"
 
 >/trunk/cpp/com/periscopic</option>
 
 <option value="/p/periscopic/source/browse/trunk/cpp/com/periscopic/air?r=6&amp;spec=svn8"
 
 >/trunk/cpp/com/periscopic/air</option>
 
 <option value="/p/periscopic/source/browse/trunk/cpp/com/periscopic/air/CommandLineProxy.cpp?r=6&amp;spec=svn8"
 selected="selected"
 >...iscopic/air/CommandLineProxy.cpp</option>
 
 </select>
 </td></tr></table>
 
 
 



 
 </div>
 
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="older_bubble">
 <p>Older revisions</p>
 
 <a href="/p/periscopic/source/list?path=/trunk/cpp/com/periscopic/air/CommandLineProxy.cpp&start=6">All revisions of this file</a>
 </div>
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="fileinfo_bubble">
 <p>File info</p>
 
 <div>Size: 440 bytes,
 25 lines</div>
 
 <div><a href="//periscopic.googlecode.com/svn/trunk/cpp/com/periscopic/air/CommandLineProxy.cpp">View raw file</a></div>
 </div>
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 </div>
 </div>


</div>

</div>
</div>

<script src="https://ssl.gstatic.com/codesite/ph/16315335801608708296/js/prettify/prettify.js"></script>
<script type="text/javascript">prettyPrint();</script>


<script src="https://ssl.gstatic.com/codesite/ph/16315335801608708296/js/source_file_scripts.js"></script>

 <script type="text/javascript" src="https://ssl.gstatic.com/codesite/ph/16315335801608708296/js/kibbles.js"></script>
 <script type="text/javascript">
 var lastStop = null;
 var initialized = false;
 
 function updateCursor(next, prev) {
 if (prev && prev.element) {
 prev.element.className = 'cursor_stop cursor_hidden';
 }
 if (next && next.element) {
 next.element.className = 'cursor_stop cursor';
 lastStop = next.index;
 }
 }
 
 function pubRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftDestroyed(data) {
 updateCursorForCell(data.cellId, 'nocursor');
 if (initialized) {
 reloadCursors();
 }
 }
 function reloadCursors() {
 kibbles.skipper.reset();
 loadCursors();
 if (lastStop != null) {
 kibbles.skipper.setCurrentStop(lastStop);
 }
 }
 // possibly the simplest way to insert any newly added comments
 // is to update the class of the corresponding cursor row,
 // then refresh the entire list of rows.
 function updateCursorForCell(cellId, className) {
 var cell = document.getElementById(cellId);
 // we have to go two rows back to find the cursor location
 var row = getPreviousElement(cell.parentNode);
 row.className = className;
 }
 // returns the previous element, ignores text nodes.
 function getPreviousElement(e) {
 var element = e.previousSibling;
 if (element.nodeType == 3) {
 element = element.previousSibling;
 }
 if (element && element.tagName) {
 return element;
 }
 }
 function loadCursors() {
 // register our elements with skipper
 var elements = CR_getElements('*', 'cursor_stop');
 var len = elements.length;
 for (var i = 0; i < len; i++) {
 var element = elements[i]; 
 element.className = 'cursor_stop cursor_hidden';
 kibbles.skipper.append(element);
 }
 }
 function toggleComments() {
 CR_toggleCommentDisplay();
 reloadCursors();
 }
 function keysOnLoadHandler() {
 // setup skipper
 kibbles.skipper.addStopListener(
 kibbles.skipper.LISTENER_TYPE.PRE, updateCursor);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_top', 50);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_bottom', 100);
 // Register our keys
 kibbles.skipper.addFwdKey("n");
 kibbles.skipper.addRevKey("p");
 kibbles.keys.addKeyPressListener(
 'u', function() { window.location = detail_url; });
 kibbles.keys.addKeyPressListener(
 'r', function() { window.location = detail_url + '#publish'; });
 
 kibbles.keys.addKeyPressListener('j', gotoNextPage);
 kibbles.keys.addKeyPressListener('k', gotoPreviousPage);
 
 
 }
 </script>
<script src="https://ssl.gstatic.com/codesite/ph/16315335801608708296/js/code_review_scripts.js"></script>
<script type="text/javascript">
 function showPublishInstructions() {
 var element = document.getElementById('review_instr');
 if (element) {
 element.className = 'opened';
 }
 }
 var codereviews;
 function revsOnLoadHandler() {
 // register our source container with the commenting code
 var paths = {'svn8': '/trunk/cpp/com/periscopic/air/CommandLineProxy.cpp'}
 codereviews = CR_controller.setup(
 {"token": "ABZ6GAecgZkU8j9hbqg4MTBFE2ANij8aZA:1411091398712", "profileUrl": "/u/104483918654914497308/", "projectName": "periscopic", "projectHomeUrl": "/p/periscopic", "assetHostPath": "https://ssl.gstatic.com/codesite/ph", "loggedInUserEmail": "romulobordezani@gmail.com", "assetVersionPath": "https://ssl.gstatic.com/codesite/ph/16315335801608708296", "domainName": null, "relativeBaseUrl": ""}, '', 'svn8', paths,
 CR_BrowseIntegrationFactory);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, showPublishInstructions);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_PUB_PLATE, pubRevealed);
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, draftRevealed);
 codereviews.registerActivityListener(CR_ActivityType.DISCARD_DRAFT_COMMENT, draftDestroyed);
 
 
 
 
 
 
 
 var initialized = true;
 reloadCursors();
 }
 window.onload = function() {keysOnLoadHandler(); revsOnLoadHandler();};

</script>
<script type="text/javascript" src="https://ssl.gstatic.com/codesite/ph/16315335801608708296/js/dit_scripts.js"></script>

 
 
 
 <script type="text/javascript" src="https://ssl.gstatic.com/codesite/ph/16315335801608708296/js/ph_core.js"></script>
 
 
 
 
</div> 

<div id="footer" dir="ltr">
 <div class="text">
 <a href="/projecthosting/terms.html">Terms</a> -
 <a href="http://www.google.com/privacy.html">Privacy</a> -
 <a href="/p/support/">Project Hosting Help</a>
 </div>
</div>
 <div class="hostedBy" style="margin-top: -20px;">
 <span style="vertical-align: top;">Powered by <a href="http://code.google.com/projecthosting/">Google Project Hosting</a></span>
 </div>

 
 


 
 
 <script type="text/javascript">_CS_reportToCsi();</script>
 
 </body>
</html>

