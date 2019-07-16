<li><a href="[field:arcurl/]"><img src="[field:litpic/]" border='0' width='130' height='170' alt="[field:title function='html2text(@me)'/]"/></a>
			<a href="[field:arcurl/]" class="title">[field:title/]</a>
			<p>时间：[field:pubdate function="GetDateMK(@me)"/]</p>
	       </li>
     </ul>
    </div>
	<div class="arcSide w300 r"><script src="/jsfile/list_side_1.js" language="javascript"></script>
      <div class="hr10"></div>
      <div class="title300">
        <h4>最新更新</h4>
        <div class="lists listNum listLine both">
          <ul>
           {dede:arclist titlelen=38 row=9=}
          <li class="num3"><em>[field:global name=autoindex /]</em><a href="[field:arcurl/]">[field:title/]</a>
        </li>
      {/dede:arclist}
         </ul>
        </div>
      </div>
      <div class="hr10"></div>
      <div class="title300">
        <h4>热门图片</h4>
      <div class="hr10"></div>
        <div class="sidePiclist both">
          <ul>
		  {dede:arclist row=4 titlelen=20 orderby='click' }
          <li> <a href="[field:arcurl/]" title="[field:title/]"><img src="[field:litpic/]" border='0' width='130' height='170'/></a>[field:title/]
	    </li>{/dede:arclist}
        </ul>
        </div>
      </div>
      <div class="title300 both">
        <h4>热门{dede:field name='typename'