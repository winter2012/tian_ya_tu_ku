<?php
$z[0]=Array("match","<span class=\"header\">[ÄÚÈÝ]<div class=\"userInfo\">",5,79);
$z[1]=Array("trim","<a([^>]*)>",84,128);
$z[1][4]['replace']="";
$z[2]=Array("trim","</a>",130,168);
$z[2][4]['replace']="";
$z[3]=Array("trim","<script([^>]*)>(.*)</script>",170,232);
$z[3][4]['replace']="";
$z[4]=Array("trim","<!--(.*)-->",234,279);
$z[4][4]['replace']="";
$z[5]=Array("trim","<table([^>]*)>(.*)</table>",281,341);
$z[5][4]['replace']="";
$z[6]=Array("trim","<iframe([^>]*)>(.*)</iframe>",343,405);
$z[6][4]['replace']="";
$z[7]=Array("trim","<span class=\"askedInfo\">(.*)</span>",407,476);
$z[7][4]['replace']="";
$z[8]=Array("trim","<form([^>]*)>(.*)</form>",478,536);
$z[8][4]['replace']="";
$z[9]=Array("trim","<div([^.]*)>",538,584);
$z[9][4]['replace']="";
$z[10]=Array("trim","</div>",586,626);
$z[10][4]['replace']="";
$z[11]=Array("trim","<span([^.]*)>",628,675);
$z[11][4]['replace']="";
$z[12]=Array("trim","</span>",677,718);
$z[12][4]['replace']="";
$z[13]=Array("trim","<input([^>]*)/>",720,769);
$z[13][4]['replace']="";
$z[14]=Array("function","",774,805);

?>