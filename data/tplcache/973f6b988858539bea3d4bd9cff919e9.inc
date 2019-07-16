{dede:sppage sptype='full' srul='1' erul='5'}{/dede:sppage}
{dede:previewurl}http://www.yirenw.com/pic/photo/40121.html{/dede:previewurl}
{dede:keywordtrim}{/dede:keywordtrim}
{dede:descriptiontrim}{/dede:descriptiontrim}
{dede:item field='title' value='' isunit='' isdown=''}
   {dede:match}<div class="tit">[ÄÚÈİ]</h1>{/dede:match}
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
   {dede:match}id="gundongtu">[ÄÚÈİ]</div>{/dede:match}
   
   {dede:function}@me=TurnImageTag(@me);
$str_1="a.jpg";
$str_2=".jpg";
@me=str_replace($str_1,$str_2,@me);










{/dede:function}
{/dede:item}{dede:item field='body' value='' isunit='1' isdown='1'}
   {dede:match}<div class="text">[ÄÚÈİ]<div class="fenxiang">{/dede:match}
   {dede:trim replace=""}<script([^>]*)>(.*)</script>{/dede:trim}
{dede:trim replace=""}<div([^.]*)>{/dede:trim}
{dede:trim replace=""}</div>{/dede:trim}
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='imgurl' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}