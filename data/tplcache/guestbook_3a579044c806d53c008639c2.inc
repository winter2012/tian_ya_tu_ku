<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=gb2312" />
<title><?php echo $cfg_webname; ?> - ���Ա�</title>
<link href="<?php echo $cfg_templeturl; ?>/default/style/dedecms.css" rel="stylesheet" type="text/css" media="screen" />
<style>
	.lefttd {
		border-left:1px solid #dedede;
		border-right:1px solid #dedede;
	}
	.ltd {
		border-left:1px solid #dedede;
		border-right:1px solid #dedede;
		border-top:1px solid #dedede;
		border-bottom:1px dashed #dedede;
	}
	.msgtd {
		line-height:180%;
		border-right:1px solid #dedede;
		padding:5px;
		height:80px;
	}
	.timetd {
		border-right:1px solid #dedede;
		border-top:1px solid #dedede;
		border-bottom:1px dashed #dedede;
		padding-left:5px;
	}
	.bottomtd {
		border-right:1px solid #dedede;
		border-top:1px dashed #dedede;
		padding-left:5px;
	}
	.writetable td {
		padding: 5px;
	}
	.writetd {
		background:url(img/wbg.gif);
	}
	.pagetable {
		border:1px solid #dedede;
		margin-bottom:8px;
		background:#FBFEED;
	}
 .pagelistbox {
 	
 }
 .pagelistbox span{
 	  border:1px solid #dedede;
 	  padding:2px;
 	  margin-right:3px;
 	  background:#E8F9BF;
 }
 .pagelistbox a {
 	  border:1px solid #dedede;
 	  padding:2px;
 	  margin-right:3px;
 	  background:#E8F9BF;
 	  padding-left:5px;
 	  padding-right:5px;
 }
 .rebox {
   width:98%;
   padding:3px;
   border:1px solid #dedede;
 }
</style>
</head>
<body class="mapspage">
<div class="header">
<div class="top w960 center">
		<div class="title">
			<h1>
				<h1><a href="<?php echo $cfg_basehost;?>/"><?php echo $cfg_webname;?></a></h1>
			</h1>
		</div><!-- /title -->
	</div><!-- /top -->
</div><!-- /header -->
<div class="w960 clear center mt1">
  <div class="sp-title">
    <h2>���Ա�</h2>
    <span class="more">
    	 <a href="#write">[��������]</a> &nbsp; 
    	 <a href="<?php echo $cfg_basehost;?>/">[������ҳ]</a>
    </span> 
  </div>
  <?php 
  $ntt=0;
  $bgcc = '#FBFEED';
  
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
if(is_array($blockValue)){
foreach( $blockValue as $key=>$fields )
{
?>
    <table width='100%' border='0' align="center" cellpadding='0' cellspacing='0' style="<?php echo (($ntt==0) ? "background:{$bgcc}" : 'background:#ffffff'); ?>">
      <tr>
        <td width='160' align="center" class='ltd'>
        	<b><?php echo $fields['uname']; ?></b>
        </td>
      	<td height="26" class='timetd'>
      		<img height='16' src='guestbook/images/time.gif' width='16' /> ʱ��: <?php echo MyDate('m-d H:i',$fields['dtime']); ?>
      	  &nbsp; 
      	  ���⣺<?php echo $fields['title']; ?>
      	</td>
      </tr>
      <tr>
      	<td width='160' rowspan='2' align="center" class='lefttd'>
        	<table width='160' border='0' align="center" cellpadding='1' cellspacing='2'>
          	<tr>
            	<td height="80" align="center">
            		<img src='guestbook/images/<?php echo $fields['face']?>.gif' border=0 /> <?php echo GetIsCheck($fields['ischeck'],$fields['id'])?>
            	</td>
          	</tr>
          	<tr>
            	<td height="20">&nbsp;���ԣ�<?php echo preg_replace("#[^\.]*\.[^\.]*$#","*.*",$fields['ip']); ?></td>
          	</tr>
          	<tr>
            	<td height="20">&nbsp;QQ��<?php echo $fields['qq']?></td>
          	</tr>
        	</table>
        </td>
      	<td class='msgtd'><?php echo $fields['msg']; ?></td>
      </tr>
      <tr>
      	<td height="26" class="bottomtd">
      		<a href='mailto:<?php echo $fields["email"]?>'><img src='guestbook/images/mail.gif' border=0 width='16' height='16' />[�ʼ�]</a> &nbsp;
      		<a href='http://<?php echo $fields['homepage']?>' target='_blank'><img src='guestbook/images/home.gif' border=0 width='16' height='16' />[��ҳ]</a> &nbsp;
      		<a href='guestbook.php?action=admin&id=<?php echo $fields['id']; ?>'><img src='guestbook/images/quote.gif' border=0 height=16 width=16 />[�ظ�/�༭]</a> &nbsp;
      		<?php if($g_isadmin) { ?>
      		<a href='guestbook.php?action=admin&id=<?php echo $fields['id']; ?>&job=del'><img src='guestbook/images/del.gif' border=0 height=16 width=16 />[ɾ��]</a>
      	  <?php }  ?>
      	</td>
      </tr>
    </table>
    <?php if($ntt==0){$ntt=1;}else{ $ntt=0; } 
}
}?>
    
   <table border='0' cellpadding='0' cellspacing='0' width='100%' align='center' class='pagetable'>
     <tr>
        <td align="center" height='28'> <?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '5';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>
 </td>
     </tr>
   </table>
    
   <table width="100%" border="0" cellspacing="1" cellpadding="4" align="center" bgcolor="#dedede" class='writetable'>
      <form method="post" action="guestbook.php" name="form1">
        <input type='hidden' name='action' value='save' />
        <tr>
          <td colspan='4' class='writetd'><b>�������ԣ�</b><a name='write'></a></td>
        </tr>
        <tr bgcolor="#ffffff">
          <td width="10%" align="center" nowrap><font color="#FF0000">*</font>���⣺</td>
          <td width="40%"><input type="text" maxlength="50" name="title" size="30" class="ipt-txt"/></td>
          <td width="10%" align="center" nowrap>�� ֤ �룺</td>
          <td>
          	<table border="0" cellspacing="0" cellpadding="0">
            <tr>
              <td width="70"><input name="validate" type="text" id="vdcode2" class="ipt-txt" style="width:60px;text-transform: uppercase;" /></td>
              <td><img src='../include/vdimgck.php'/></td>
            </tr>
          </table>
         </td>
        </tr>
        <tr bgcolor="#ffffff">
          <td width="10%" align="center" nowrap><font color="#FF0000">*</font>���������</td>
          <td width="40%"><input type="text" maxlength="10" name="uname" size="30" value="<?php echo $g_name; ?>" class="ipt-txt"/></td>
          <td width="10%" align="center" nowrap>OICQ���룺</td>
          <td width="40%"><input maxlength="20" type="text" name="qq" size="20" class="ipt-txt" /></td>
        </tr>
        <tr bgcolor="#ffffff">
          <td align="center" nowrap>&nbsp;�����ʼ���</td>
          <td><input maxlength="80" type="text" name="email" size="30" class="ipt-txt"/></td>
          <td align="center" nowrap height="12">������ҳ��</td>
          <td height="12"><input maxlength="80" type="text" name="homepage" size="20" class="ipt-txt" /></td>
        </tr>
        <tr bgcolor="#ffffff">
          <td align="center" nowrap width="10%"><font color="#FF0000">*</font>�������ݣ�<br />
            (1000����) </td>
          <td align="left" width="40%">
          	<textarea name="msg" cols="38" rows="5" class="textarea ipt-txt"></textarea>
          </td>
          <td align="center" nowrap height="2" width="10%">ѡ��ͷ��</td>
          <td nowrap height="2" width="40%">
          	<input type="radio" name="img" value="01" checked />
            <img src="guestbook/images/01.gif" width="25" height="25" />
            <input type="radio" name="img" value="02" />
            <img src="guestbook/images/02.gif" width="25" height="25" />
            <input type="radio" name="img" value="03" />
            <img src="guestbook/images/03.gif" width="25" height="25" />
            <input type="radio" name="img" value="04" />
            <img src="guestbook/images/04.gif" width="25" height="25" />
            <input type="radio" name="img" value="05" />
            <img src="guestbook/images/05.gif" width="25" height="25" />
            <input type="radio" name="img" value="06" />
            <img src="guestbook/images/06.gif" width="25" height="25" /> 
            <input type="radio" name="img" value="08" />
            <img src="guestbook/images/08.gif" width="25" height="25" />
            <br /><br />
            <input type="radio" name="img" value="13" />
            <img src="guestbook/images/13.gif" width="25" height="25" />
            <input type="radio" name="img" value="14" />
            <img src="guestbook/images/14.gif" width="25" height="25" />
            <input type="radio" name="img" value="15" />
            <img src="guestbook/images/15.gif" width="25" height="25" />
            <input type="radio" name="img" value="16" />
            <img src="guestbook/images/16.gif" width="25" height="25" />
            <input type="radio" name="img" value="17" />
            <img src="guestbook/images/17.gif" width="25" height="25" />
            <input type="radio" name="img" value="18" />
            <img src="guestbook/images/18.gif" width="25" height="25" />
            <input type="radio" name="img" value="20" />
            <img src="guestbook/images/20.gif" width="25" height="25" />
           </td>
        </tr>
        <tr bgcolor="#ffffff">
          <td colspan="4" align="center" nowrap><input maxlength="1000" type="submit" name="Submit" value="�� ��" class="btn-2" />
            &nbsp;&nbsp;
            <input type="reset" name="Submit2" value="ȡ ��" class="btn-2" /></td>
        </tr>
      </form>
    </table>
   <br />
</div>

<?php include $this->CompilerInclude("plus_foot.htm");
 ?>

</div>
</body>
</html>