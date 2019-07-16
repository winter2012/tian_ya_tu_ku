<?php
$z[0]=Array("match","<DIV id=entrybody>[ÄÚÈÝ]<div class=\"dede_pages\"",5,77);
$z[1]=Array("trim","<a([^>]*)>",82,126);
$z[1][4]['replace']="";
$z[2]=Array("trim","</a>",128,166);
$z[2][4]['replace']="";
$z[3]=Array("trim","<script([^>]*)>(.*)</script>",168,230);
$z[3][4]['replace']="";
$z[4]=Array("trim","<!--(.*)-->",232,277);
$z[4][4]['replace']="";
$z[5]=Array("trim","<style([^>]*)>(.*)</style>",279,339);
$z[5][4]['replace']="";
$z[6]=Array("trim","<div([^.]*)>",341,387);
$z[6][4]['replace']="";
$z[7]=Array("trim","</div>",389,429);
$z[7][4]['replace']="";
$z[8]=Array("function","",434,465);

?>