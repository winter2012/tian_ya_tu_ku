{dede:noteinfo notename="˿������" channelid="2" macthtype="string"
refurl="http://www.ddxiezhen.com/siwa/" sourcelang="gb2312" cosort="asc" isref="no" exptime="10" usemore="0" /}

{dede:listrule sourcetype="batch" rssurl="http://" regxurl="http://www.ddxiezhen.com/siwa/index_(*).html"
startid="1" endid="2" addv="1" urlrule="area"
 musthas="" nothas="" listpic="0" usemore="0"}
    {dede:addurls}{/dede:addurls}
    {dede:batchrule}{/dede:batchrule}
    {dede:regxrule}{/dede:regxrule}
    {dede:areastart} <ul class="i_pic">{/dede:areastart}
    {dede:areaend}</ul>{/dede:areaend}
{/dede:listrule}
{dede:sppage sptype='full' sptype='full' srul='1' erul='5'}<div class="page page_c">[����]</div>{/dede:sppage}
{dede:previewurl}http://www.ddxiezhen.com/siwa/201201/6093121.html{/dede:previewurl}
{dede:keywordtrim}{/dede:keywordtrim}
{dede:descriptiontrim}{/dede:descriptiontrim}
{dede:item field='title' value='' isunit='' isdown=''}
   {dede:match}<title>[����]</title>{/dede:match}
   {dede:trim replace=''} - ������д��{/dede:trim}
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
   {dede:match}<p align="center"> [����]</p>{/dede:match}
   {dede:trim replace=''}<a([^>]*)>(.*)</a>{/dede:trim}
   {dede:function}@me=TurnImageTag(@me);{/dede:function}
{/dede:item}
{dede:item field='body' value='' isunit='1' isdown='1'}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}