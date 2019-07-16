$(document).ready(function(){
	//ͼ��ͼƬ����
	var totalnum = $("#pictureurls li").length;
	
	//��ȡê�㼴��ǰͼƬid
	var picid = location.hash;
	picid = picid.substring(1);
	if(picid == "max"){
		picid = totalnum;
		location.hash = picid;
	}else if(isNaN(picid) || picid=='' || picid==null) {
		picid = 1;
	}
	picid = parseInt(picid);

	
	//�����ǰͼƬid����ͼƬ������ʾ��һ��ͼƬ
	if(picid > totalnum || picid < 1) {
		picid = 1;
		next_picid = 1;	//��һ��ͼƬid
	} else {
		next_picid = picid + 1;
	}

	url = $("#pictureurls li:nth-child("+picid+") img").attr("rel");
	$("#big-pic").html("<img src='"+url+"' onload='loadpic("+next_picid+")'>");
	$('#big-pic img').LoadImage(true, 906, 940,$("#load_pic").attr('rel'));
	//$("#picnum").html("("+picid+"/"+totalnum+")");
	$("#nowpage").html(""+picid+"");
	$("#totalpage").html(""+totalnum+"");
	$("#picinfo").html($("#pictureurls li:nth-child("+picid+") img").attr("alt"));

	$("#pictureurls li").click(function(){
		i = $(this).index() + 1;
		showpic(i);
		return false;
	});
	

	//����ʱͼƬ�������м�
	var _w = $('.cont li').width()*$('.cont li').length;
	if(picid>2) {
		movestep = picid - 3;
	} else {
		movestep = 0;
	}
	$(".cont ul").css({"left":-+$('.cont li').width()*movestep});

	//���ͼƬ����
	$('.cont ul').width(_w);
	$(".cont li").click( function () {
	    if($(this).index()>2){
			movestep = $(this).index() - 2;
			$(".cont ul").css({"left":-+$('.cont li').width()*movestep});
		}
	});
	//��ǰ����ͼ�����ʽ
	$("#pictureurls li:nth-child("+picid+")").addClass("on");
	
	//�������
	var huaban = $("#huaban_share");
	$(".big-pic").hover(function(){
		updateHuaban();
	},function(){
		huaban.css({"display":"none"});
	});
	huaban.click(function(){
		window.open($(this).attr("href"),"","status=no,resizable=no,scrollbars=yes,personalbar=no,directories=no,location=no,toolbar=no,menubar=no,width=632,height=270,left=200,top=150");
		return false;
	});
});

$(document).keyup(function(e) {     
	var currKey=0,e=e||event;
	currKey=e.keyCode||e.which||e.charCode;
	switch(currKey) {     
		case 37: // left
			showpic('pre');
			break;
		case 39: // up
			showpic('next');
			break;
		case 13: // enter
			var nextpicurl = $('#nextPicsBut').attr('href');
			if(nextpicurl !== '' || nextpicurl !== 'null') {
				window.location=nextpicurl;
			}
			break;
	}   
});


function showpic(type) {
	_hmt.push(['_trackPageview', location.pathname]);
	//ͼ��ͼƬ����
	var totalnum = $("#pictureurls li").length,picid = location.hash.substring(1);
	
	if(isNaN(picid) || picid=='' || picid==null) {
		picid = 1;
	}
	picid = parseInt(picid);
	
	if(picid > 1){
		var adIframes = $("#iframe1,#starIframe1");
		if($("#iframe1:hidden").size() > 0){
			adIframes.css("display","block");
		}
	}
	
	if(type=='next' || type=='pre') {

		if(type=='next') {
			i = picid + 1;
			//��������һ��ͼƬ��ָ��ָ���һ��
			if(i > totalnum) {
				var nextUrl = $(".list-pic .next a");
				if(nextUrl.size()>0){
					top.location.href = nextUrl.attr("href");
					return;
				}else{
					alert("����û����Ŷ , ������ҳ�鿴�����Ը���Ů��~");
					return;
				}
			} else {
				next_picid = parseInt(i) + 1;
			}

		} else if (type=='pre') {
			i = picid - 1;
			//����ǵ�һ��ͼƬ��ָ��ָ�����һ��
			if(i < 1) {
				var preUrl = $(".list-pic .pre a");
				if(preUrl.size()>0){
					top.location.href = preUrl.attr("href") + "#max";
					return;
				}else{
					alert("ǰ��û����Ŷ , ������ҳ�鿴�����Ը���Ů��~");
					return;
				}
			} else {
				next_picid = parseInt(i) - 1;
			}
		}
		url = $("#pictureurls li:nth-child("+i+") img").attr("rel");
		$("#big-pic").html("<img src='"+url+"' onload='loadpic("+next_picid+")'>");
		$('#big-pic img').LoadImage(true, 906, 940,$("#load_pic").attr('rel'));
		//$("#picnum").html("("+i+"/"+totalnum+")");
		$("#nowpage").html(""+i+"");
	    $("#totalpage").html(""+totalnum+"");
		$("#picinfo").html($("#pictureurls li:nth-child("+i+") img").attr("alt"));
		//����ê��
		location.hash = i;
		type = i;

		//���ͼƬ����
		var _w = $('.cont li').width()*$('.cont li').length;
		if(i>2) {
			movestep = i - 3;
		} else {
			movestep = 0;
		}
		$(".cont ul").css({"left":-+$('.cont li').width()*movestep});
	} else if(type=='big') {
		url = $("#pictureurls li:nth-child("+picid+") img").attr("rel");
		window.open(url);
	} else {
		url = $("#pictureurls li:nth-child("+type+") img").attr("rel");
		$("#big-pic").html("<img src='"+url+"'>");
		$('#big-pic img').LoadImage(true, 906, 940,$("#load_pic").attr('rel'));
		//$("#picnum").html("("+type+"/"+totalnum+")");
		$("#nowpage").html(""+type+"");
		$("#totalpage").html(""+totalnum+"");
		$("#picinfo").html($("#pictureurls li:nth-child("+type+") img").attr("alt"));
		location.hash = type;
	}

	$("#pictureurls li").each(function(i){
		j = i+1;
		if(j==type) {
			$("#pictureurls li:nth-child("+j+")").addClass("on");
		} else {
			$("#pictureurls li:nth-child("+j+")").removeClass();
		}
	});

	updateHuaban();
}
//Ԥ����ͼƬ
function loadpic(id) {
	url = $("#pictureurls li:nth-child("+id+") img").attr("rel");
	$("#load_pic").html("<img src='"+url+"'>");
}

function updateHuaban(){
	var huaban = $("#huaban_share")
		,bigImg = $("#big-pic img")
		,bigImgSrc = bigImg.attr("src")
		,pos = bigImg.position()
		,huabanUrl = "http://huaban.com/bookmarklet/?";
	if(pos.left > 5){
		shareUrl = huabanUrl + "url=" + encodeURIComponent(window.location) + "&media=" + encodeURIComponent(bigImgSrc) + "&description=" + encodeURIComponent(document.title);
		huaban.css({"display":"block","top":pos.top-3,"left":pos.left-3}).attr("href",shareUrl);
	}
}
