
var gSwitch = false;
var gAutoSwitch = false;
function IsIE()
{
	var c = navigator.userAgent.toLowerCase();
	var bIsIe = (c.indexOf("msie") > -1) || (navigator.appName.toLowerCase().indexOf("microsoft internet explorer") > -1) || !! window.ActiveXObject || "ActiveXObject" in window;
	return bIsIe;

}

function InitBind()
{
	
$gjjq("#exit_link").click(function(e) {
	
	reportExit();
	if(IsIE())
	{
		if(typeof(window.TsCmcNavObj) != "object")
		return false;
		if(window.TsCmcNavObj.ExitAdc== "undefined")
		return false;
		window.TsCmcNavObj.ExitAdc();	
		if(window.TsCmcNavObj.CallTopJs== "undefined")
		return false;
		
		window.TsCmcNavObj.CallTopJs(13);
		return false;
	}
	else{
		 chrome.extension.sendRequest({cmd: "callCustom", id: 2}, 
				function(response) {
					});
	}
	
});
$gjjq("#feedback_link").click(function(e) {

	reportFeedBack();
	if(IsIE())
	{
	if ( typeof(window.TsCmcObj) == "object" )
			{
				if( typeof(window.TsCmcObj.Feedback) != "undefined" )
				{
					//window.TsCmcObj.Feedback();	
					return true;
				}
			}
	}
	else{
			//chrome.extension.sendRequest({cmd: "callCustom", id: 0}, 
			//function(response) {
			//			});
	}
	return true;
});
$gjjq("#close-link").click(function(e) {

	if(IsIE())
	{
		if(typeof(window.TsCmcNavObj) != "object")
		return false;
		if(window.TsCmcNavObj.CallTopJs== "undefined")
		return false;
		//alert(/CallTopJs/);
		window.TsCmcNavObj.CallTopJs(12);
		return false;
	}
	else{
		chrome.extension.sendRequest({cmd: "closeAdcPanel", id: 0}, 
		function(response) {
						});
		return false;
	}
});
$gjjq("#setting-link").click(function(e) {

	reportSetting();
	if(IsIE())
	{
	if ( typeof(window.TsCmcObj) == "object" )
		{
			if( typeof(window.TsCmcObj.Setting) != "undefined" )
			{
				window.TsCmcObj.Setting(3);	
			}
		}
		
	}
	else{
		chrome.extension.sendRequest({cmd: "cmcSetting", id: 3}, 
								function(response){	
							});
	}
	return false;
});
$gjjq("#switch_auto_click").click(function(e) {

	if(!gSwitch)
	{
		console.log("主开关没有打开");
		//return false;
	}
	
	if(IsIE())
		{
		  if(typeof(window.TsCmcNavObj) != "object")
			return false;
			if(window.TsCmcNavObj.QAdHistorySw== "undefined")
			return false;
			var bOpen = window.TsCmcNavObj.QAdHistorySw();
			if(bOpen)
			{   reportAutoSwitchOff();
				//console.log("关闭");
				//$gjjq("#switch_auto_click img").attr("src","./img/normal.png");
				window.TsCmcNavObj.SAdHistorySw(0);
				
			}
			else
			{
				reportAutoSwitchOn();
				//$gjjq("#switch_auto_click img").attr("src","./img/btn_normal.png");
				//console.log("开启");
				window.TsCmcNavObj.SAdHistorySw(1);
				if(!gSwitch)
				{
					//console.log("开启总开关");
					window.TsCmcNavObj.SAdSwitch(1);
				}
			 
			}
			InitAdSwitchState();
		}
		else{
			
		chrome.extension.sendRequest({cmd: "querySwitchState", id: 0}, 
		function(response) {
			//ContinueInitSwitchState(response.bSwitch);
			var dwid  = 0;
			if(response.bSwitch)
			{
				reportSwitchOff();
				//$gjjq("#switch_pic img").attr("src","./img/normal.png");
			}
			else
			{
				reportSwitchOn();
				//$gjjq("#switch_pic img").attr("src","./img/btn_normal.png");
				dwid = 1;
			}
			chrome.extension.sendRequest({cmd: "callCustom", id: dwid}, 
				function(response) {
					});
					});
		}
});
$gjjq("#switch_pic").click(function(e) {
	
	if(IsIE())
		{
		  if(typeof(window.TsCmcNavObj) != "object")
			return false;
			if(window.TsCmcNavObj.QAdSwitch== "undefined")
			return false;
			var bOpen = window.TsCmcNavObj.QAdSwitch();
			if(bOpen)
			{   reportSwitchOff();
				//$gjjq("#switch_pic img").attr("src","./img/normal.png");
				window.TsCmcNavObj.SAdSwitch(0);
				window.TsCmcNavObj.SAdHistorySw(0);
			}
			else
			{
				reportSwitchOn();
				//$gjjq("#switch_pic img").attr("src","./img/btn_normal.png");
				window.TsCmcNavObj.SAdSwitch(1);
			}
			
			InitAdSwitchState();
		}
		else{
			
		chrome.extension.sendRequest({cmd: "querySwitchState", id: 0}, 
		function(response) {
			//ContinueInitSwitchState(response.bSwitch);
			var dwid  = 0;
			if(response.bSwitch)
			{
				reportSwitchOff();
				$gjjq("#switch_pic img").attr("src","./img/normal.png");
			}
			else
			{
				reportSwitchOn();
				$gjjq("#switch_pic img").attr("src","./img/btn_normal.png");
				dwid = 1;
			}
			chrome.extension.sendRequest({cmd: "callCustom", id: dwid}, 
				function(response) {
					});
					});
		}
});
}

//QAdSwitch
//
function ContinueInitSwitchState(bOpen,bAuto)
{
	gSwitch = bOpen;
	gAutoSwitch = bAuto;
	
	//console.log(gSwitch  + gAutoSwitch);
	if(bOpen)
	{
		$gjjq("#switch_pic img").attr("src","./img/btn_normal.png")
		//window.TsCmcNavObj.SAdSwitch(0);
	}
	else
	{
		$gjjq("#switch_pic img").attr("src","./img/normal.png")
		//window.TsCmcNavObj.SAdSwitch(1);
	}
	
	if(bOpen && bAuto)
	{
		$gjjq("#switch_auto_click img").attr("src","./img/btn_normal.png")
	}
	else
	{
		$gjjq("#switch_auto_click img").attr("src","./img/normal.png")
	}
}
function InitAdSwitchState()
{	var bOpen = false;
	var bAuto = 0;
	if(IsIE())
	{	
		if(typeof(window.TsCmcNavObj) != "object")
		return false;
		if(window.TsCmcNavObj.QAdSwitch== "undefined")
		return false;
		if(window.TsCmcNavObj.QAdHistorySw== "undefined")
		return false;
		bOpen = window.TsCmcNavObj.QAdSwitch();
		bAuto = window.TsCmcNavObj.QAdHistorySw();
		ContinueInitSwitchState(bOpen,bAuto);
	}
	else
	{	
		 chrome.extension.sendRequest({cmd: "querySwitchState", id: 0}, 
		function(response) {
			//ContinueInitSwitchState(response.bSwitch);
						});
	}
	
}

function ContinueDrawLine(strAdCount)
{
	var arrayData = new Array();
	var arrayautoData = new Array();
	var arrayDate = new Array();
	if(strAdCount.length ==0)
	return;
	
	var jsonobj = JSON.parse(strAdCount);
	
	
    var week_count = 0;
	var auto_count = 0;
	var manual_count = 0;
	//alert(strAdCount);
	var Max = 0;
	for(var i = 4; i >=0 ; i--)
	{
		var now = new Date();
		now.setDate(now.getDate()- i)
		
		var month = now.getMonth() +1;
		var date =  now.getDate();
		
		var mprifix =  month > 9 ? "" : "0";
		var dprifix =  date > 9 ? "" : "0"
		var strData =   mprifix + month +"." +dprifix+date;

		arrayDate.push(strData)
		var value= 0;
		var auto_value = 0;
		if(jsonobj.days!= null)
		{
			 if(jsonobj.days[''+strData+''])
			{
				value = jsonobj.days[''+strData+''];
				manual_count = manual_count + value;
			}
			else
			{
				value = 0;
			}
		}
		if(jsonobj.days_auto!=null)
		 {
			if(jsonobj.days_auto[''+strData+''])
			{
				auto_value = jsonobj.days_auto[''+strData+''];
				 auto_count = auto_count +auto_value;
			}
			else
			{
				auto_value = 0;
			}
		 }
		
		 if(value > Max)Max = value;
		arrayData.push(value);
		arrayautoData.push(auto_value);
		
	}
	week_count = manual_count + auto_count;
	
	$gjjq("#count").text(week_count);
	$gjjq("#manual_count").text(manual_count);
	$gjjq("#auto_count").text(auto_count);
	//arrayautoData = [10,200,80,40,250];
	//arrayDate = ["1.1","1.1","1.1","1.1","1.1"]
	
        var myChart = echarts.init(document.getElementById('main'));
		var option = {
			// 标题
						title : {
							text : '最近5日统计:',
							show : true,
							x:10,
							fontSize : 14,
							 textStyle: {
								color: '#888889',
								fontSize : 14,
								fontFamily: "微软雅黑",
								fontWeight: 'light'
							}
						},
						grid: {
							x: 25,
							y: 42,
							x2: 0,
							y2: 20,
							borderWidth:0
						},
						  tooltip : {         // Option config. Can be overwrited by series or data
						trigger: 'axis',
						//show: true,   //default true
						showDelay: 0,
						hideDelay: 50,
						axisPointer: {
						type: 'none'
						} ,                   
						transitionDuration:0,
						backgroundColor : 'rgba(59,98,211,0.7)',
						padding: 10,    // [5, 10, 15, 20]
						position : function(p) {
							// 位置回调
							// console.log && console.log(p);
							return [p[0] + 10, p[1] - 10];
						},
						formatter: function (params,ticket,callback) {
							var res = '';
							res +=  '手动过滤' + ' : ' + params[0].value;
							res += '<br/>' + '自动过滤'  + ' : ' + params[1].value;
							return res;
						}
						},
						xAxis : [ {
							type : 'category',
							Color:'#0042ff',
							splitLine:
							{
							show: false
							},
							axisLine:
							{
								show:false
							},
							axisTick:
							{
							  show:false
							},
							axisLabel : {
								textStyle: {
									color: '#888889',
									fontSize : 11,
									fontFamily: "微软雅黑",
									fontWeight: 'light',
									margin:6
								}
							},
							data : arrayDate
						} ],
						// y轴
						yAxis : [ {
							type : 'value',
							Color:'#0042ff',
							splitNumber:2,
							max:100,
							nameLocation:'start',
							splitLine:
							{
							show: false
							},
							axisTick:
							{
							  show:false
							},
							axisLine:
							{
								show:false
							},
							show : true,
							axisLabel : {
								formatter : '{value}',
								textStyle: {
									color: '#888889',
									fontSize : 8,
									fontFamily: "微软雅黑",
									fontWeight: 'light'
								}
							}
						} ],
						
						// 数值序列
						series : [ {
							type : 'line',
							color:'#FEA054',
							data : arrayData,
							 itemStyle : {  
								normal : {  
									color : '#FEA054',  
									lineStyle : {  
										width : 1  
									},  
									label : {  
										show : false,  
										position : 'top',  
										textStyle : {  
											fontStyle : 'light',  
											fontSize : 12,
											color: '#888889'
										}  
									}  
								}  
			  
							},  
						   // symbol : 'Circle',  
							symbolSize : 2,  
						},
						{
							type : 'line',
							color:'#0042ff',
							data : arrayautoData,
							 itemStyle : {  
								normal : {  
									color : '#0042ff',  
									lineStyle : {  
										width : 1  
									},  
									label : {  
										show : false,  
										position : 'top',  
										textStyle : {  
											fontStyle : 'light',  
											fontSize : 12,
											color: '#888889'
										}  
									}  
								}  
			  
							},  
						   // symbol : 'Circle',  
							symbolSize : 2,  
						}
						 ],
						
					};
				myChart.setOption(option, true);
       
}

function InitAdCount()
{
	var strAdCount="";
	if(IsIE())
	{
	if ( typeof(window.TsCmcObj) == "object" )
		{
			if( typeof(window.TsCmcObj.GetAdCount) != "undefined" )
			{
				strAdCount = window.TsCmcObj.GetAdCount();	
						if(strAdCount.length>0)
						{
							ContinueDrawLine(strAdCount);	
						}
			}
		}
	}
	else
	{

		chrome.extension.sendRequest({cmd: "getADCCount", id: 0}, 
		function(response) {
			if(response.count.length > 0)
				{
					ContinueDrawLine(response.count);	
				}
			});
		
	}
	


}


var gjguid;
var Bid;
var refer;
var url;
var   type;
var   pod;
var   partner;
var   nid;
var      nReportClickUrlId = 2;
var		nReportAddUrl=  3;
var		nReportDelUrl = 4;
function report(type) {
	
		var g = {};
		g.gjguid = gjguid;
		g.type = type;
		g.bid = Bid;
		g.reserve1 = "2";
		//g.alias = name;
		//g.url =  encodeURIComponent(url);
		g.refer = encodeURIComponent(document.referrer);
		g.rand = Math.random();
		
		//g.ad_pod = pod;
		//g.partner = partner;
		//g.dist_id= nid;
		var f = 0;
		for (var b in g) {
			f += b.toString().length + g[b].toString().length + 2
		}
		if (f > 1024) {
			var d = "&cut=1";
			var e = f - 1024;
			if (g.refer.toString().length >= (e + d.length)) {
				g.refer = g.refer.substr(0, g.refer.toString().length - e - d.length)
			} 
			g.cut = "1"
		}
		getReport("http://c.gj.qq.com/fcgi-bin/microreport", g, 1024)
	}
function getReport(e, h, d) {
		if (undefined === e || undefined === h || "" == e) {
			return 0
		}
		var i = "";
		var f = "?";
		for (var b in h) {
			i += f + b + "=" + h[b].toString();
			f = "&"
		}
		if ("" == i) {
			return 0
		}
		var g = e + i;
		if ("number" == typeof d && g.length > d) {
			g = g.substr(0, d)
		}
		
		AjaxReport(g);
		return g.length
	}
function OpenUrl(url)
{
	window.open(url);
}

 function AjaxReport(report_url){
		
	$gjjq.ajax({   
		url: report_url,
		type: "get" ,
		dataType: "jsonp",
		jsonp: "repcallback",
		async : false,
		cache: false,
		success: function(data) {           
								}
		});
				
}

function reportSetting()
{
	report(21);
}

function reportSwitchOn()
{
	report(22);
}
function reportSwitchOff()
{
	report(23);
}
function reportFeedBack()
{
	report(24);
}
function reportExit()
{
	report(25);
}
function reportAutoSwitchOn()
{
	report(26);
}
function reportAutoSwitchOff()
{
	report(27);
}


function picError() {
  return;
}
function isIEBrowser(){
		var b = {
			isIE: false,
			nVersion: -1
		};
		var c = navigator.userAgent.toLowerCase();
		b.isIE = (c.indexOf("msie") > -1) || (navigator.appName.toLowerCase().indexOf("microsoft internet explorer") > -1) || !! window.ActiveXObject || "ActiveXObject" in window;
		if (b.isIE) {
			var d = null;
			(d = c.match(/rv:([\d.]+)\) like gecko/)) ? b.nVersion = parseInt(d[1]) : (d = c.match(/msie ([\d.]+)/)) ? b.nVersion = parseInt(d[1]) : -1
		}
		return b
}



function InitEvent()
{
	
	var hash = location.hash ? location.hash.split('#') : '';
	if(hash.length > 2)
	{
	 gjguid = hash[1];
	 Bid = hash[2];
	 refer = hash[3];
	}
}

function Run()
{
	InitEvent();
	InitBind();
	InitAdSwitchState();
	InitAdCount();

}

setTimeout("Run();",1000);
//window.onload = function(){
	

	
	

//}



