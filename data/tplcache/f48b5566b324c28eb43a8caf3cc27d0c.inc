
   {dede:match}<div id="content">[ÄÚÈİ]<div id="tishibox">{/dede:match}
   {dede:trim replace=''}<a([^>]*)>{/dede:trim}
{dede:trim replace=''}</a>{/dede:trim}
{dede:trim replace=''}<script([^>]*)>(.*)</script>{/dede:trim}
{dede:trim replace=''}<ins([^>]*)>(.*)</ins>{/dede:trim}
{dede:trim replace=''}<!--(.*)-->{/dede:trim}
{dede:trim replace=''}<div([^.]*)>{/dede:trim}
{dede:trim replace=''}</div>{/dede:trim}
{dede:trim replace=''}<span([^.]*)>{/dede:trim}
{dede:trim replace=''}</span>{/dede:trim}
   {dede:function}{/dede:function}
