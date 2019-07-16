{dede:noteinfo notename="清纯美女" channelid="2" macthtype="string"
refurl="http://" sourcelang="utf-8" cosort="asc" isref="no" exptime="10" usemore="0" /}

{dede:listrule sourcetype="batch" rssurl="http://" regxurl="http://www.win4000.com/meinvtag3_(*).html"
startid="2" endid="4" addv="1" urlrule="area"
 musthas="" nothas="tag" listpic="0" usemore="0"}
    {dede:addurls}http://www.win4000.com/meinvtag3.html{/dede:addurls}
    {dede:batchrule}{/dede:batchrule}
    {dede:regxrule}{/dede:regxrule}
    {dede:areastart}<ul class="pic-list" id="pic-list">{/dede:areastart}
    {dede:areaend}<div id="page_warp"{/dede:areaend}
{/dede:listrule}
{dede:sppage sptype='diyrule' sptype='diyrule' srul='1' erul='20'}{path}{file}_{p}{ext}{/dede:sppage}
{dede:previewurl}http://www.win4000.com/meinv25267.html{/dede:previewurl}
{dede:keywordtrim}{/dede:keywordtrim}
{dede:descriptiontrim}{/dede:descriptiontrim}
{dede:item field='title' value='' isunit='' isdown=''}
   {dede:match}<div class="toptitle">[内容]</h1>{/dede:match}
   {dede:trim replace=''}<div([^.]*)>{/dede:trim}
{dede:trim replace=''}</div>{/dede:trim}
{dede:trim replace=''}<h1([^.]*)>{/dede:trim}
{dede:trim replace=''}</h1>{/dede:trim}
   {dede:function}{/dede:function}
{/dede:item}
{dede:item field='writer' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}
{dede:item field='source' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}
{dede:item field='pubdate' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}@me=GetMkTime(@me);{/dede:function}
{/dede:item}
{dede:item field='imgurls' value='' isunit='1' isdown='1'}
   {dede:match}<div class="nph_cnt" id="photoView">[内容]</div>{/dede:match}
   
   {dede:function}@me=TurnImageTag(@me);{/dede:function}
{/dede:item}
{dede:item field='body' value='' isunit='1' isdown='1'}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}
{dede:item field='imgurl' value='' isunit='1' isdown='1'}
   {dede:match}{/dede:match}
   
   {dede:function}@me=TurnImageTag(@me);{/dede:function}
{/dede:item}
