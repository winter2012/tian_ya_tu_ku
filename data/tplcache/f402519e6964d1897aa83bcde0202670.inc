{dede:noteinfo notename="��������" channelid="1" macthtype="string"
refurl="http://" sourcelang="utf-8" cosort="asc" isref="no" exptime="10" usemore="0" /}

{dede:listrule sourcetype="batch" rssurl="http://" regxurl="http://www.meizu.com/services/questionList.html?type=2&gradeClass=1&gradeTypeId=17002&pageNumber=(*)"
startid="1" endid="314" addv="1" urlrule="area"
 musthas=".html" nothas="" listpic="0" usemore="0"}
    {dede:addurls}{/dede:addurls}
    {dede:batchrule}{/dede:batchrule}
    {dede:regxrule}{/dede:regxrule}
    {dede:areastart}<div class="p_tabbg">{/dede:areastart}
    {dede:areaend}<div class="centerSep">{/dede:areaend}
{/dede:listrule}
{dede:sppage sptype='full' sptype='full' srul='1' erul='5'}{/dede:sppage}
{dede:previewurl}http://www.meizu.com/services/questionContent.html?questionId=518062{/dede:previewurl}
{dede:keywordtrim}{/dede:keywordtrim}
{dede:descriptiontrim}{/dede:descriptiontrim}
{dede:item field='title' value='' isunit='' isdown=''}
   {dede:match}<title>[����]</title>{/dede:match}
   {dede:trim replace=''}-����֧��{/dede:trim}
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
{dede:item field='body' value='' isunit='1' isdown='1'}
   {dede:match}<span class="header">[����]<div class="userInfo">{/dede:match}
   {dede:trim replace=''}<a([^>]*)>{/dede:trim}
{dede:trim replace=''}</a>{/dede:trim}
{dede:trim replace=''}<script([^>]*)>(.*)</script>{/dede:trim}
{dede:trim replace=''}<!--(.*)-->{/dede:trim}
{dede:trim replace=''}<table([^>]*)>(.*)</table>{/dede:trim}
{dede:trim replace=''}<iframe([^>]*)>(.*)</iframe>{/dede:trim}
{dede:trim replace=''}<span class="askedInfo">(.*)<div class="blank5">{/dede:trim}
{dede:trim replace=''}<form([^>]*)>(.*)</form>{/dede:trim}
{dede:trim replace=''}<div([^.]*)>{/dede:trim}
{dede:trim replace=''}</div>{/dede:trim}
{dede:trim replace=''}<span([^.]*)>{/dede:trim}
{dede:trim replace=''}</span>{/dede:trim}
{dede:trim replace=''}<input([^>]*)/>{/dede:trim}
   {dede:function}{/dede:function}
{/dede:item}