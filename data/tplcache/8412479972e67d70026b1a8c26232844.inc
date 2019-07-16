
[field:pagestyle runphp='yes'] @me= (@me==3 ? '<li>' : '');[/field:pagestyle]
<img src='[field:imgsrc/]' id='bigimg' onload='javascript:if(this.width>900)this.width=900' border='0' alt='[field:title /]' /><br />

 [field:pagestyle runphp='yes'] @me = (@me==3 ? '</li>' : ''); [/field:pagestyle]