$(function(){setTimeout(onWidthChange,500);});function onWidthChange()
{if($(window).width()>0){var e=document.documentElement.clientWidth;var font_size=e*.04+"px";var font_size_small=e*.03+"px";$(".autosize").css("font-size",font_size);$(".font_size_small").css("font-size",font_size_small);var val=$("#menu").attr("val");if(val==1)
{var ShowNewNav=$("#ShowNewNav").height();$("#WrapAutoHeight").height(ShowNewNav-1);}else if(val==0)
{$("#WrapAutoHeight").height("auto");}}
setTimeout(onWidthChange,500);}
var daohang=$("#menu");var ShowNewNav=$("#showMenu");var WrapAutoHeight=$("#WrapAutoHeight").height();daohang.click(function(){var val=$("#menu").attr("val");if(val==0){ShowNewNav=$("#showMenu").show(200);var val=$("#menu").attr("val",1);var ShowNewNav=$("#showMenu").height();$("#WrapAutoHeight").height(ShowNewNav);}else{ShowNewNav=$("#showMenu").hide(200);var val=$("#menu").attr("val",0);$("#WrapAutoHeight").height("auto");}});