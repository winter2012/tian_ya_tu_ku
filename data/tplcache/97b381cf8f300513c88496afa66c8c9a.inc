
   {dede:match}<p align="center"> [����]</p>{/dede:match}
   {dede:trim replace=''}<a([^>]*)>(.*)</a>{/dede:trim}
   {dede:function}@me=TurnImageTag(@me);{/dede:function}