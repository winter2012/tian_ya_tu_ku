{dede:sppage sptype='diyrule' sptype='diyrule' srul='1' erul='20'}{path}{file}_{p}{ext}{/dede:sppage}
{dede:previewurl}http://www.win4000.com/meinv25267.html{/dede:previewurl}
{dede:keywordtrim}{/dede:keywordtrim}
{dede:descriptiontrim}{/dede:descriptiontrim}
{dede:item field='title' value='' isunit='' isdown=''}
   {dede:match}<div class="toptitle">[ÄÚÈÝ]</h1>{/dede:match}
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
   {dede:match}<div class="nph_cnt" id="photoView">[ÄÚÈÝ]</div>{/dede:match}
   
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
