<?php
function GetPicsTruePath($body,$litpic) //解析body数据，获得所有图片的绝对地址 
{ 
  $delfiles = array();//存储图片地址数据 
  if(!empty($litpic)) 
  { 
    $litpicpath = GetTruePath(); 
    $litpicpath .= $litpic; 
    $delfiles[] = $litpicpath;//缩略图地址 
  } 
  preg_match_all("/src=[\"|'|\S|\s]([^ |\/|>]*){0,}(([^>]*)\.(gif|jpg|png))/isU",$body,$tmpdata); 
  $picspath = array_unique($tmpdata[2]);//body中所有图片的地址 
  foreach($picspath as $tmppath) 
  { 
    $path = GetTruePath();//获得绝对路径 
    $picpath = preg_replace("/[a-zA-z]+:\/\/[^ |\/|\s]*/",'',$tmppath);//去掉网址部分 
    $path .=$picpath; 
    $delfiles[] = $path;//保存处理后的数据 
  } 
  return $delfiles; 
} 
   // 提取图集第一张大图，为arclist用
	
function Get_firstbigimg($aid){
	global $dsql;
	$imgurls='';
	$row=$dsql->getone("Select imgurls From #@__addonimages where aid='$aid' ");
	$imgurls=$row['imgurls']; 
	preg_match_all("/{dede:img[^>]+}(.*){\/dede:img/isU",$imgurls,$imgurlsed);
    $get_firestimg = $imgurlsed[1][0]; //
    return $get_firestimg;
	} 
	
//图集总数
function Getimgnum($aid){
	global $dsql;
	$imgurls='';
	$row=$dsql->getone("Select imgurls From #@__addonimages where aid='$aid' ");
	   $imgurls=$row['imgurls'];  
	    preg_match_all("/{dede:img (.*){\/dede:img/isU",$imgurls,$wordcount);
		$count=count($wordcount[1]);
		return$count;
	} 

//自定义缩略图大小
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
 
 //头文件函数调用
 function pasterTempletDiy($path)
{
  require_once(DEDEINC."/arc.partview.class.php");
  global $cfg_basedir,$cfg_templets_dir;
  $tmpfile = $cfg_basedir.$cfg_templets_dir."/".$path;//模版文件的路径
  $dtp = new PartView();
  $dtp->SetTemplet($tmpfile);
  $dtp->Display();
}