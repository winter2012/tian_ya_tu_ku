<?php   if(!defined('DEDEINC')) exit('Request Error!');
/**
 * 指定的单个栏目的链接标签
 *
 * @version        $Id: type.lib.php 1 9:29 2010年7月6日Z tianya $
 * @package        DedeCMS.Taglib
 * @copyright      Copyright (c) 2007 - 2010, DesDev, Inc.
 * @license        http://help.dedecms.com/usersguide/license.html
 * @link           http://www.dedecms.com
 */
 
/*>>dede>>
<name>指定栏目</name>
<type>全局标记</type>
<for>V55,V56,V57</for>
<description>表示指定的单个栏目的链接</description>
<demo>
{dede:type}
<a href="[field:typelink /]">[field:typename /]</a>
{/dede:type}
</demo>
<attributes>
    <iterm>typeid:指定栏目ID</iterm> 
</attributes> 
>>dede>>*/
 
function lib_type2(&$ctag,&$refObj)
{
	global $dsql,$envs;

	$attlist='typeid|0';
	FillAttsDefault($ctag->CAttribute->Items,$attlist);
	extract($ctag->CAttribute->Items, EXTR_SKIP);
	$innertext = trim($ctag->GetInnerText());

	if($typeid==0) {
		$typeid = ( isset($refObj->TypeLink->TypeInfos['topid']) ? $refObj->TypeLink->TypeInfos['topid'] : $envs['typeid'] );
	}

	//if(empty($typeid)) return '';
	if(empty($typeid)) $typeid=$refObj->TypeLink->TypeInfos['id'];
	//$row=null;
	//if()
	$row = $dsql->GetOne("Select topid,typedir,isdefault,defaultname,ispart,namerule2,typename,moresite,siteurl,sitepath 
	                     From `#@__arctype` where id='$typeid' ");
	if(!is_array($row)) return '';
	if(trim($innertext)=='') $innertext = GetSysTemplets("part_type_list.htm");
	
	$dtp = new DedeTagParse();
	$dtp->SetNameSpace('field','[',']');
	$dtp->LoadSource($innertext);
	if(!is_array($dtp->CTags))
	{
		unset($dtp);
		return '';
	}
	else
	{
		$row['typelink'] = GetTypeUrl($row['topid'],MfTypedir($row['typedir']),$row['isdefault'],
		                    $row['defaultname'],$row['ispart'],$row['namerule2'],$row['siteurl'],$row['sitepath']);
		foreach($dtp->CTags as $tagid=>$ctag)
		{
			if(isset($row[$ctag->GetName()])) $dtp->Assign($tagid,$row[$ctag->GetName()]);
		}
		$revalue = $dtp->GetResult();
		unset($dtp);
		return $revalue;
	}
}