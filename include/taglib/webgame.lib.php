<?php
function lib_webgame(&$ctag,&$refObj)
{
	global $dsql;

	$attlist = "row|100,type|";
	FillAttsDefault($ctag->CAttribute->Items,$attlist);
	extract($ctag->CAttribute->Items, EXTR_SKIP);
	$innertext = $ctag->GetInnerText();
	$line = empty($row) ? 100 : $row;

//»î¶¯	
	if($game=='web')
	{$sql = "select typedir,typename,litpic from {$GLOBALS['cfg_web_mysql']}web_arctype where tui='ËõÂÔÍ¼ÍÆ¼ö' order by id desc limit 0,$line ";}
	if($game=='web-2')
	{$sql = "select typedir,typename,litpic from {$GLOBALS['cfg_web_mysql']}web_arctype where tui='ËõÂÔÍ¼ÍÆ¼ö' order by id desc limit 2,$line ";}

	if($game=='flash')
	{$sql = "select title,litpic,id from {$GLOBALS['cfg_xyx_mysql']}dede_archives where `flag` like '%c%' and channel='4' order by id desc limit 0,$line ";}
	
   if($game=='yy')
	{$sql = "select {$GLOBALS['cfg_web_mysql']}web_addonflink.flink,{$GLOBALS['cfg_web_mysql']}web_archives.title,id,shorttitle,litpic from {$GLOBALS['cfg_web_mysql']}web_addonflink,{$GLOBALS['cfg_web_mysql']}web_archives where {$GLOBALS['cfg_web_mysql']}web_addonflink.aid={$GLOBALS['cfg_web_mysql']}web_archives.id and `flag` like '%a%' order by pubdate desc limit 0,$line";}
  $needRel = false;
	$dtp2 = new DedeTagParse();
	$dtp2->SetNameSpace('field','[',']');
	$dtp2->LoadSource($innertext);
	
	if(empty($sql)) return '';
	$dsql->SetQuery($sql);
	$dsql->Execute();
	for($i=0;$i < $line;$i++)
	{
	if($row=$dsql->GetArray())
    {
	 if($needRel)
	    {
	$row['sonids'] = GetSonIds($row['id'], 0, false);}
	 else{
	 if(is_array($dtp2->CTags))
        {
	foreach($dtp2->CTags as $tagid=>$ctag)
	{
	if(isset($row[$ctag->GetName()])) $dtp2->Assign($tagid,$row[$ctag->GetName()]);
	    } 
	}
	$liketype .= $dtp2->GetResult();
		}
	}			
}
	return $liketype;
}
?>