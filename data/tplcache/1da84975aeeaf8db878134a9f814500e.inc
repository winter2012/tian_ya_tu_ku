
{dede:noteinfo notename="վ��-����" channelid="1" macthtype="string"
    refurl="" sourcelang="utf-8" cosort="asc"
  isref="no" exptime="10" usemore="0" /}
{dede:listrule sourcetype="rss" rssurl="http://fknet.cn/chanjilink.html" regxurl="http://www.zcool.com.cn/articles/322!325!200!2!(*)!0!0!2/"
startid="1" endid="1" addv="1" urlrule="area" musthas=".html"
 nothas="" listpic="1" usemore="0"}
    {dede:addurls}{/dede:addurls}
    {dede:batchrule}{/dede:batchrule}
    {dede:regxrule}{/dede:regxrule}
    {dede:areastart}<div>{/dede:areastart}
    {dede:areaend}</div>{/dede:areaend}
{/dede:listrule}


{dede:sppage sptype='full' srul='1' erul='5'}{/dede:sppage}
{dede:previewurl}http://www.zcool.com.cn/article/ZMTU4OTI=.html{/dede:previewurl}
{dede:keywordtrim}{/dede:keywordtrim}
{dede:descriptiontrim}{/dede:descriptiontrim}
{dede:item field='title' value='' isunit='' isdown=''}
   {dede:match}<title>[����]_{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='writer' value='' isunit='' isdown=''}
   {dede:match}�����ߣ�@վ���� - [����]��{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='source' value='' isunit='' isdown=''}
   {dede:match}Powered By [����]��ZCOOL��</title>{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='pubdate' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='body' value='' isunit='1' isdown='1'}
   {dede:match}<div class="tutorial_show_min font14 u">[����]<p class="u">������{/dede:match}
   {dede:trim replace=""}<a(.*)>{/dede:trim}
{dede:trim replace=""}<div(.*)>{/dede:trim}
{dede:trim replace=""}</div>{/dede:trim}
   {dede:function}{/dede:function}
{/dede:item}