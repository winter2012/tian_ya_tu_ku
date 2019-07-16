<?php
$title=iconv('utf-8','gbk',佐佐氏网络);
$Shortcut = "[InternetShortcut]
URL=http://luidea.taobao.com
IDList=
[{000214A0-0000-0000-C000-000000000046}]
Prop3=19,2";
Header("Content-type: application/octet-stream");
header("Content-Disposition: attachment; filename=".$title.".url;");
echo $Shortcut;
?>