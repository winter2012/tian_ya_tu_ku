
[field:pagestyle runphp='yes'] @me= (@me==3 ? '<li>' : '');[/field:pagestyle]
<a href='javascript:dPlayNext();' [field:pagestyle runphp='yes'] @me= (@me==3 ? 'class="pic"' : ''); [/field:pagestyle]><img src='[field:imgsrc/]' id='bigimg' onload='javascript:if(this.width>900)this.width=900' border='0' alt='[field:title /]' /></a><br />
<a href='[field:imgsrc/]' target='_blank' title='[field:title /]'>[field:title /]</a>
 [field:pagestyle runphp='yes'] @me = (@me==3 ? '</li>' : ''); [/field:pagestyle]