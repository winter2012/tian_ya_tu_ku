<?php
$z[0]=Array("match","<div class=\"tit\">[ÄÚÈİ]</h1>",5,58);
$z[1]=Array("trim","<a([^>]*)>",63,107);
$z[1][4]['replace']="";
$z[2]=Array("trim","</a>",109,147);
$z[2][4]['replace']="";
$z[3]=Array("trim","<h1([^>]*)>",149,194);
$z[3][4]['replace']="";
$z[4]=Array("trim","</h1>",196,235);
$z[4][4]['replace']="";
$z[5]=Array("function","",240,271);

?>