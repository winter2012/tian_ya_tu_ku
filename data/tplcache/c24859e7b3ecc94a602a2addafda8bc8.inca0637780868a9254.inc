<?php
$z[0]=Array("match","<div class=\"toptitle\">[ÄÚÈİ]</h1>",5,63);
$z[1]=Array("trim","<div([^.]*)>",68,114);
$z[1][4]['replace']="";
$z[2]=Array("trim","</div>",116,156);
$z[2][4]['replace']="";
$z[3]=Array("trim","<h1([^.]*)>",158,203);
$z[3][4]['replace']="";
$z[4]=Array("trim","</h1>",205,244);
$z[4][4]['replace']="";
$z[5]=Array("function","",249,280);

?>