<?php
function GetPicsTruePath($body,$litpic) //����body���ݣ��������ͼƬ�ľ��Ե�ַ 
{ 
  $delfiles = array();//�洢ͼƬ��ַ���� 
  if(!empty($litpic)) 
  { 
    $litpicpath = GetTruePath(); 
    $litpicpath .= $litpic; 
    $delfiles[] = $litpicpath;//����ͼ��ַ 
  } 
  preg_match_all("/src=[\"|'|\S|\s]([^ |\/|>]*){0,}(([^>]*)\.(gif|jpg|png))/isU",$body,$tmpdata); 
  $picspath = array_unique($tmpdata[2]);//body������ͼƬ�ĵ�ַ 
  foreach($picspath as $tmppath) 
  { 
    $path = GetTruePath();//��þ���·�� 
    $picpath = preg_replace("/[a-zA-z]+:\/\/[^ |\/|\s]*/",'',$tmppath);//ȥ����ַ���� 
    $path .=$picpath; 
    $delfiles[] = $path;//���洦�������� 
  } 
  return $delfiles; 
} 
   // ��ȡͼ����һ�Ŵ�ͼ��Ϊarclist��
	
function Get_firstbigimg($aid){
	global $dsql;
	$imgurls='';
	$row=$dsql->getone("Select imgurls From #@__addonimages where aid='$aid' ");
	$imgurls=$row['imgurls']; 
	preg_match_all("/{dede:img[^>]+}(.*){\/dede:img/isU",$imgurls,$imgurlsed);
    $get_firestimg = $imgurlsed[1][0]; //
    return $get_firestimg;
	} 
	
//ͼ������
function Getimgnum($aid){
	global $dsql;
	$imgurls='';
	$row=$dsql->getone("Select imgurls From #@__addonimages where aid='$aid' ");
	   $imgurls=$row['imgurls'];  
	    preg_match_all("/{dede:img (.*){\/dede:img/isU",$imgurls,$wordcount);
		$count=count($wordcount[1]);
		return$count;
	} 

//�Զ�������ͼ��С
function thumb($imgurl, $width, $height, $bg = true)
{
global $cfg_mainsite,$cfg_multi_site;
 $thumb = eregi("http://",$imgurl)?str_replace($cfg_mainsite,'',$imgurl):$imgurl;
 list($thumbname,$extname) = explode('.',$thumb);
 $newthumb = $thumbname.'_'.$width.'_'.$height.'.'.$extname;
 if(!$thumbname || !$extname || !file_exists(DEDEROOT.$thumb)) return $imgurl;
 if(!file_exists(DEDEROOT.$newthumb))
 {
 include_once DEDEINC.'/image.func.php';
 if($bg==true)
 {
 ImageResize(DEDEROOT.$thumb, $width, $height, DEDEROOT.$newthumb);
}
 else
{
ImageResize(DEDEROOT.$thumb, $width, $height, DEDEROOT.$newthumb);
 }
 }
 return $cfg_multi_site=='Y'?$cfg_mainsite.$newthumb:$newthumb;
 }
 function GetOneImgUrl($img,$ftype=1){   
    if($img <> ''){   
        $dtp = new DedeTagParse();   
        $dtp->LoadSource($img);   
        if(is_array($dtp->CTags)){   
            foreach($dtp->CTags as $ctag){   
                if($ctag->GetName()=='img'){   
                    $width = $ctag->GetAtt('width');   
                    $height = $ctag->GetAtt('height');   
                    $imgurl = trim($ctag->GetInnerText());   
                    $img = '';   
                    if($imgurl != ''){   
                        if($ftype==1){   
                            $img .= $imgurl;   
                        }   
                        else{   
                            $img .= '<img src="'.$imgurl.'" width="'.$width.'" height="'.$height.'" />';   
                        }   
                    }   
                               
                }   
            }   
        }   
        $dtp->Clear();   
        return $img;       
    }   
}  
 
 //ͷ�ļ���������
 function pasterTempletDiy($path)
{
  require_once(DEDEINC."/arc.partview.class.php");
  global $cfg_basedir,$cfg_templets_dir;
  $tmpfile = $cfg_basedir.$cfg_templets_dir."/".$path;//ģ���ļ���·��
  $dtp = new PartView();
  $dtp->SetTemplet($tmpfile);
  $dtp->Display();
}