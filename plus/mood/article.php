<?php
@header("Pragma:no-cache\r\n");
@header("Cache-Control:no-cache\r\n");
@header("Expires:0\r\n");
@header("Content-Type: text/html; charset=gb2312");
$time = time();
$time24 = $time-86400;//����ÿ��IP��ͶƱ����Ĭ��Ϊ24Сʱ

require_once(dirname(__FILE__)."../../../include/common.inc.php");

if(empty($aid)) $aid = "1";
//if(!isset($mood))$mood = $_POST['mood'];
if(!isset($action))$action = 'not';
$aid = ereg_replace("[^0-9]","",$aid);
//$dsql = new DedeSql(-100);
$uip = GetIP();//��ȡ�û�IP
//print_r($_GET);

if($action == 'mood'){
	$rankmood = $mood;
	$mood = 'mood'.$mood;

	//�ύͶƱ����
	$sql = "UPDATE `#@__mood` SET $mood=$mood+1 WHERE `aid` ='$aid'";
	$ranksql = "INSERT INTO `#@__mood_ranking` ( `aid` , `mood` , `time` ,`ip` )VALUES ('$aid', '$rankmood', '$time', '$uip')";
	$dsql->ExecuteNoneQuery2($sql);
	$dsql->ExecuteNoneQuery2($ranksql);

	//setcookie("mood","$aid");
	//header("HTTP/1.1 303 See Other");
	//header("Location:mood.php?aid=$aid");
	//exit();
	$action = 'not';
}

//
if($action == 'not'){
	$sql="Select count(id) as cc From `#@__mood` where `aid`='$aid'";
	$rs=$dsql->GetOne($sql);


	//����Ƿ��д���ͶƱ����
	if($rs['cc'] == 0){
		$sql = "INSERT INTO `#@__mood` ( `id` , `aid` ) VALUES (NULL , '$aid' )";
		$dsql->ExecuteNoneQuery($sql);
	}

	//��ѯͶƱ����
	$row = $dsql->GetOne("SELECT mood1,mood2,mood3,mood4,mood5,mood6,mood7,mood8 FROM `#@__mood` where `aid`='$aid'",MYSQL_NUM);
	$mood1 	= $row[0];	//�ׇ�
	$mood2 	= $row[1];	//ǿ�� 
	$mood3 	= $row[2];	//����
	$mood4 	= $row[3];  //����
	$mood5 	= $row[4];  //��ŭ
	$mood6 	= $row[5];	//��Ц
	$mood7 	= $row[6];	//����
	$mood8 	= $row[7];	//�ڴ�
	$moods	= array_sum($row);
	$moodl	= @(50/$moods);


	//����Ƿ��Ѿ�ͶƱ
	$tp = $dsql->GetOne("SELECT count( mood ) AS cc FROM `#@__mood_ranking` WHERE aid = '$aid' AND ip = '$uip' AND time > $time24");
	if($tp['cc'] > 0)$js = 'alert(\'���ղ��Ѿ���̬����Ŷ��\');//';
	else $js = '';

	//ͳ��Ʊ������
	function moodl($mood){
		global $row;
		global $moodl;
		global $cfg_phpurl;
		if($mood == max($row)){
			$mood = ceil($moodl*$mood);
			echo "<img src=\"$cfg_phpurl/mood/100.gif\" width=\"20\" height=\"$mood\" />";
		}else if($mood == 0){
			echo "<img src=\"$cfg_phpurl/mood/101.gif\" width=\"20\" height=\"1\" />";
		}else{
			$mood = ceil($moodl * $mood);
			echo "<img src=\"$cfg_phpurl/mood/101.gif\" width=\"20\" height=\"$mood\" />";
		}
	}
}
include_once('article.html');
$dsql->Close();
exit();
?>