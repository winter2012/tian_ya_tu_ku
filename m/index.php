<?php
if(!file_exists(dirname(__FILE__).'/../data/common.inc.php'))
{
    header('Location:install/index.php');
    exit();
}
//�Զ�����HTML��
if(isset($_GET['upcache']) || !file_exists('index.html'))
{
    require_once (dirname(__FILE__) . "/../include/common.inc.php");
    require_once DEDEINC."/arc.partview.class.php";
    $GLOBALS['_arclistEnv'] = 'index';
    $row = $dsql->GetOne("Select * From `#@__homepageset`");
    $row['templet'] = MfTemplet($row['templet']);
    
    $pv = new PartView();
    $row['templet'] =str_replace('.htm','_m.htm',$row['templet']);
/*     if ( !file_exists($cfg_basedir . $cfg_templets_dir . "/" . $row['templet']) )
    {
        echo "ģ���ļ������ڣ��޷������ĵ���";
        exit();
    } */
    $pv->SetTemplet($cfg_basedir . $cfg_templets_dir . "/" . $row['templet']);
    $pv->Display();
}
else
{
    header('HTTP/1.1 301 Moved Permanently');
    header('Location:index.html');
}
?>