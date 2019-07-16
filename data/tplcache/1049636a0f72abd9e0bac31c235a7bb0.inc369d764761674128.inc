<?php
$z[0]=Array("match","<div id=\"content\">[ÄÚÈÝ]<div id=\"tishibox\">",5,73);
$z[1]=Array("trim","<a([^>]*)>",78,122);
$z[1][4]['replace']="";
$z[2]=Array("trim","</a>",124,162);
$z[2][4]['replace']="";
$z[3]=Array("trim","<script([^>]*)>(.*)</script>",164,226);
$z[3][4]['replace']="";
$z[4]=Array("trim","<!--(.*)-->",228,273);
$z[4][4]['replace']="";
$z[5]=Array("trim","<div([^.]*)>",275,321);
$z[5][4]['replace']="";
$z[6]=Array("trim","</div>",323,363);
$z[6][4]['replace']="";
$z[7]=Array("trim","<span([^.]*)>",365,412);
$z[7][4]['replace']="";
$z[8]=Array("trim","</span>",414,455);
$z[8][4]['replace']="";
$z[9]=Array("function","",460,491);

?>