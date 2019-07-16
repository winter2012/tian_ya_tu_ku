<?php
$z[0]=Array("match","<div class=\"text\">[ÄÚÈİ]<div class=\"fenxiang\">",5,76);
$z[1]=Array("trim","<script([^>]*)>(.*)</script>",81,143);
$z[1][4]['replace']="";
$z[2]=Array("trim","<div([^.]*)>",145,191);
$z[2][4]['replace']="";
$z[3]=Array("trim","</div>",193,233);
$z[3][4]['replace']="";
$z[4]=Array("function","",238,269);

?>