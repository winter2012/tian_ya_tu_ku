
{dede:noteinfo notename="性感美女 www.yirenw.com" channelid="2" macthtype="string"
    refurl="http://" sourcelang="gb2312" cosort="asc"
  isref="no" exptime="10" usemore="0" /}
{dede:listrule sourcetype="batch" rssurl="http://" regxurl="http://www.yirenw.com/pic/more/080506105634646886/(*).html"
startid="1" endid="39" addv="1" urlrule="area" musthas=""
 nothas="" listpic="0" usemore="0"}
    {dede:addurls}{/dede:addurls}
    {dede:batchrule}{/dede:batchrule}
    {dede:regxrule}{/dede:regxrule}
    {dede:areastart}<div class="picli">{/dede:areastart}
    {dede:areaend}<div class="fenye">{/dede:areaend}
{/dede:listrule}


{dede:sppage sptype='full' srul='1' erul='5'}{/dede:sppage}
{dede:previewurl}http://www.yirenw.com/pic/photo/40121.html{/dede:previewurl}
{dede:keywordtrim}{/dede:keywordtrim}
{dede:descriptiontrim}{/dede:descriptiontrim}
{dede:item field='title' value='' isunit='' isdown=''}
   {dede:match}<div class="tit">[内容]</h1>{/dede:match}
   {dede:trim replace=""}<a([^>]*)>{/dede:trim}
{dede:trim replace=""}</a>{/dede:trim}
{dede:trim replace=""}<h1([^>]*)>{/dede:trim}
{dede:trim replace=""}</h1>{/dede:trim}
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='writer' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='source' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='pubdate' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='imgurls' value='' isunit='1' isdown='1'}
   {dede:match}id="gundongtu">[内容]</div>{/dede:match}
   
   {dede:function}@me=TurnImageTag(@me);
$str_1="a.jpg";
$str_2=".jpg";
@me=str_replace($str_1,$str_2,@me);









{/dede:function}
{/dede:item}{dede:item field='body' value='' isunit='1' isdown='1'}
   {dede:match}<div class="text">[内容]<div class="fenxiang">{/dede:match}
   {dede:trim replace=""}<script([^>]*)>(.*)</script>{/dede:trim}
{dede:trim replace=""}<div([^.]*)>{/dede:trim}
{dede:trim replace=""}</div>{/dede:trim}
   {dede:function}{/dede:function}
{/dede:item}
