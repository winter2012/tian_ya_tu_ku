<?php
$z[0]=Array("match","<div class=\"tutorial_show_min font14 u\">[内容]<p class=\"u\">本文由",5,95);
$z[1]=Array("trim","<a(.*)>",100,141);
$z[1][4]['replace']="";
$z[2]=Array("trim","<div(.*)>",143,186);
$z[2][4]['replace']="";
$z[3]=Array("trim","</div>",188,228);
$z[3][4]['replace']="";
$z[4]=Array("function","",233,264);

?>