
{dede:noteinfo notename="比基尼 xgmm" channelid="2" macthtype="string"
    refurl="http://" sourcelang="gb2312" cosort="asc"
  isref="no" exptime="10" usemore="0" /}
{dede:listrule sourcetype="batch" rssurl="http://" regxurl="http://www.xgmm.cc/mm/bijini/list_3_(*).html"
startid="1" endid="2" addv="1" urlrule="area" musthas=""
 nothas="" listpic="0" usemore="0"}
    {dede:addurls}{/dede:addurls}
    {dede:batchrule}{/dede:batchrule}
    {dede:regxrule}{/dede:regxrule}
    {dede:areastart}<div class="main">{/dede:areastart}
    {dede:areaend}<div class="pages">{/dede:areaend}
{/dede:listrule}


{dede:sppage sptype='full' srul='1' erul='5'}<div class="cont" style="position:relative">[内容]</ul>{/dede:sppage}
{dede:previewurl}http://www.xgmm.cc/mm/xingganmeinv/20131114/755.html{/dede:previewurl}
{dede:keywordtrim}{/dede:keywordtrim}
{dede:descriptiontrim}(.*){/dede:descriptiontrim}
{dede:item field='title' value='' isunit='' isdown=''}
   {dede:match}<h1>[内容]</h1>{/dede:match}
   
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
   {dede:match}<ul class="cont picbig" id="pictureurls"  style="position:absolute">[内容]</ul>{/dede:match}
   
   {dede:function}@me=TurnImageTag(@me);


{/dede:function}
{/dede:item}{dede:item field='body' value='' isunit='1' isdown='1'}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}
