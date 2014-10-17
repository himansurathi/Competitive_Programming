var Drupal=Drupal||{settings:{},behaviors:{},themes:{},locale:{}};Drupal.jsEnabled=true;Drupal.attachBehaviors=function(e){e=e||document;jQuery.each(Drupal.behaviors,function(){this(e)})};Drupal.checkPlain=function(e){e=String(e);var r={"&":"&amp;",'"':"&quot;","<":"&lt;",">":"&gt;"};for(var t in r){var a=new RegExp(t,"g");e=e.replace(a,r[t])}return e};Drupal.t=function(e,r){if(Drupal.locale.strings&&Drupal.locale.strings[e]){e=Drupal.locale.strings[e]}if(r){for(var t in r){switch(t.charAt(0)){case"@":r[t]=Drupal.checkPlain(r[t]);break;case"!":break;case"%":default:r[t]=Drupal.theme("placeholder",r[t]);break}e=e.replace(t,r[t])}}return e};Drupal.formatPlural=function(e,r,t,a){var a=a||{};a["@count"]=e;var n=Drupal.locale.pluralFormula?Drupal.locale.pluralFormula(a["@count"]):a["@count"]==1?0:1;if(n==0){return Drupal.t(r,a)}else if(n==1){return Drupal.t(t,a)}else{a["@count["+n+"]"]=a["@count"];delete a["@count"];return Drupal.t(t.replace("@count","@count["+n+"]"))}};Drupal.theme=function(e){for(var r=1,t=[];r<arguments.length;r++){t.push(arguments[r])}return(Drupal.theme[e]||Drupal.theme.prototype[e]).apply(this,t)};Drupal.parseJson=function(data){if(data.substring(0,1)!="{"&&data.substring(0,1)!="["){return{status:0,data:data.length?data:Drupal.t("Unspecified error")}}return eval("("+data+");")};Drupal.freezeHeight=function(){Drupal.unfreezeHeight();var e=document.createElement("div");$(e).css({position:"absolute",top:"0px",left:"0px",width:"1px",height:$("body").css("height")}).attr("id","freeze-height");$("body").append(e)};Drupal.unfreezeHeight=function(){$("#freeze-height").remove()};Drupal.encodeURIComponent=function(e,r){r=r||location.href;e=encodeURIComponent(e).replace(/%2F/g,"/");return r.indexOf("?q=")!=-1?e:e.replace(/%26/g,"%2526").replace(/%23/g,"%2523").replace(/\/\//g,"/%252F")};Drupal.getSelection=function(e){if(typeof e.selectionStart!="number"&&document.selection){var r=document.selection.createRange();var t=r.duplicate();t.moveToElementText(e);t.setEndPoint("EndToEnd",r);var a=t.text.length-r.text.length;var n=a+r.text.length;return{start:a,end:n}}return{start:e.selectionStart,end:e.selectionEnd}};Drupal.ahahError=function(e,r){if(e.status==200){if(jQuery.trim(e.responseText)){var t=Drupal.t("An error occurred. \n@uri\n@text",{"@uri":r,"@text":e.responseText})}else{var t=Drupal.t("An error occurred. \n@uri\n(no information available).",{"@uri":r})}}else{var t=Drupal.t("An HTTP error @status occurred. \n@uri",{"@uri":r,"@status":e.status})}return t.replace(/\n/g,"<br />")};$(document.documentElement).addClass("js");$(document).ready(function(){Drupal.attachBehaviors(this)});Drupal.theme.prototype={placeholder:function(e){return"<em>"+Drupal.checkPlain(e)+"</em>"}};