<?php
$z[0]=Array("global","",236,264);
$z[0][4]['name']="cfg_soft_lang";
$z[1]=Array("field","",277,296);
$z[1][4]['name']="title";
$z[2]=Array("global","",297,323);
$z[2][4]['name']="cfg_webname";
$z[3]=Array("field","",364,393);
$z[3][4]['name']="keywords";
$z[4]=Array("field","",433,491);
$z[4][4]['name']="description";
$z[4][4]['function']="html2text(@me)";
$z[5]=Array("global","",542,570);
$z[5][4]['name']="cfg_basehost";
$z[6]=Array("include","",713,750);
$z[6][4]['filename']="header.htm";
$z[7]=Array("field","",1010,1039);
$z[7][4]['name']="position";
$z[8]=Array("list","\r\n				<li>\r\n					<a href=\"[field:arcurl/]\"  class=\"img\" target=\"_blank\"><img src=\"[field:litpic/]\" alt=\"[field:title function='html2text(@me)'/]\"/><i class=\"tit\">[field:title/]</i><s></s></a></li>\r\n          ",1221,1480);
$z[8][4]['pagesize']="20";
$z[8][4]['titlelen']="24";
$z[9]=Array("arclist","\r\n          <li><a title=[field:title/] href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a><span>[field:pubdate function=MyDate('m-d',@me)/]</span></li>\r\n		  ",1839,2054);
$z[9][4]['row']="9";
$z[9][4]['titlelen']="28";
$z[10]=Array("arclist","\r\n          <li><a title=[field:title/] href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a><span>[field:pubdate function=MyDate('m-d',@me)/]</span></li>\r\n		  ",2302,2544);
$z[10][4]['row']="9";
$z[10][4]['titlelen']="28";
$z[10][4]['orderby']="pubdate";
$z[10][4]['flag']="c";
$z[11]=Array("pagelist","",2838,2909);
$z[11][4]['listitem']="info,index,end,pre,next,pageno";
$z[11][4]['listsize']="5";
$z[12]=Array("arclist","\r\n<li><a href=\"[field:arcurl/]\" class=\"img\" target=\"_blank\"><img src=\"[field:litpic/]\" alt=\"[field:title function='html2text(@me)'/]\" /><i class=\"tit\">[field:title /]</i><s></s></a></li>\r\n",3171,3436);
$z[12][4]['row']="6";
$z[12][4]['titlelen']="28";
$z[12][4]['orderby']="click";
$z[12][4]['idlist']="";
$z[13]=Array("include","",3568,3603);
$z[13][4]['filename']="foot.htm";

?>