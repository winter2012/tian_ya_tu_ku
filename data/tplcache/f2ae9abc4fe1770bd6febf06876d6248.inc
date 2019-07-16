{dede:noteinfo notename="网店货源 www.taoqao.com" channelid="1" macthtype="regex"
    refurl="" sourcelang="gb2312" cosort="asc"
  isref="no" exptime="10" usemore="0" /}
{dede:listrule sourcetype="batch" rssurl="http://fknet.cn/chanjilink.html" regxurl="http://www.taoqao.com/wangshangkaidian/wdhy/list_6_(*).html"
startid="1" endid="27" addv="1" urlrule="area" musthas=""
 nothas="" listpic="0" usemore="0"}
    {dede:addurls}{/dede:addurls}
    {dede:batchrule}{/dede:batchrule}
    {dede:regxrule}{/dede:regxrule}
    {dede:areastart}<div class="news_list">	{/dede:areastart}
    {dede:areaend}<div class="pagenum">{/dede:areaend}
{/dede:listrule}
{dede:sppage sptype='diyrule' srul='1' erul='5'}{path}{file}_{p}{ext}{/dede:sppage}
{dede:previewurl}http://www.taoqao.com/wangshangkaidian/wdhy/20120617/15697.html{/dede:previewurl}
{dede:keywordtrim}{/dede:keywordtrim}
{dede:descriptiontrim}{/dede:descriptiontrim}
{dede:item field='title' value='' isunit='' isdown=''}
   {dede:match}<H1>[内容]</H1>{/dede:match}
   
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
{/dede:item}{dede:item field='body' value='' isunit='1' isdown='1'}
   {dede:match}<DIV id=entrybody>[内容]<div class="dede_pages"{/dede:match}
   {dede:trim replace=""}<a([^>]*)>{/dede:trim}
{dede:trim replace=""}</a>{/dede:trim}
{dede:trim replace=""}<script([^>]*)>(.*)</script>{/dede:trim}
{dede:trim replace=""}<!--(.*)-->{/dede:trim}
{dede:trim replace=""}<style([^>]*)>(.*)</style>{/dede:trim}
{dede:trim replace=""}<div([^.]*)>{/dede:trim}
{dede:trim replace=""}</div>{/dede:trim}
   {dede:function}{/dede:function}
{/dede:item}