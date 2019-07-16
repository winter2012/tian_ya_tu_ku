
   {dede:match}<span class="header">[ÄÚÈİ]<div class="userInfo">{/dede:match}
   {dede:trim replace=''}<a([^>]*)>{/dede:trim}
{dede:trim replace=''}</a>{/dede:trim}
{dede:trim replace=''}<script([^>]*)>(.*)</script>{/dede:trim}
{dede:trim replace=''}<!--(.*)-->{/dede:trim}
{dede:trim replace=''}<table([^>]*)>(.*)</table>{/dede:trim}
{dede:trim replace=''}<iframe([^>]*)>(.*)</iframe>{/dede:trim}
{dede:trim replace=''}<span class="askedInfo">(.*)</span>{/dede:trim}
{dede:trim replace=''}<form([^>]*)>(.*)</form>{/dede:trim}
{dede:trim replace=''}<div([^.]*)>{/dede:trim}
{dede:trim replace=''}</div>{/dede:trim}
{dede:trim replace=''}<span([^.]*)>{/dede:trim}
{dede:trim replace=''}</span>{/dede:trim}
{dede:trim replace=''}<input([^>]*)/>{/dede:trim}
   {dede:function}{/dede:function}
