{dede:noteinfo notename="美女照片" channelid="2" macthtype="string"
    refurl="http://www.mn123.net/wangluohongren/" sourcelang="gb2312" cosort="asc"
  isref="no" exptime="10" usemore="0" /}
{dede:listrule sourcetype="batch" rssurl="http://" regxurl="http://www.mn123.net/wangluohongren/list_5_(*).html"
startid="1" endid="2" addv="1" urlrule="area" musthas=""
 nothas="" listpic="0" usemore="0"}
    {dede:addurls}{/dede:addurls}
    {dede:batchrule}{/dede:batchrule}
    {dede:regxrule}{/dede:regxrule}
    {dede:areastart}<div class="main_column">{/dede:areastart}
    {dede:areaend}</div>{/dede:areaend}
{/dede:listrule}
{dede:sppage sptype='diyrule' srul='1' erul='5'}{path}{file}_{p}{ext}{/dede:sppage}
{dede:previewurl}http://www.mn123.net/wangluohongren/159.html{/dede:previewurl}
{dede:keywordtrim}{/dede:keywordtrim}
{dede:descriptiontrim}{/dede:descriptiontrim}
{dede:item field='title' value='' isunit='' isdown=''}
   {dede:match}<title>[内容]</title>{/dede:match}
   {dede:trim replace=""}_美女专题站{/dede:trim}
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
   {dede:match}<div class="content_pic">[内容]</div>{/dede:match}
   
   {dede:function}@me=TurnImageTag(@me);








{/dede:function}
{/dede:item}{dede:item field='body' value='' isunit='1' isdown='1'}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='imgurl' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}