(function(a,d,c,b){a.fn.caret=function(e,j){var i,p,n=this[0],o=a.browser.msie;if(typeof e==="object"&&typeof e.start==="number"&&typeof e.end==="number"){i=e.start;p=e.end}else{if(typeof e==="number"&&typeof j==="number"){i=e;p=j}else{if(typeof e==="string"){if((i=n.value.indexOf(e))>-1){p=i+e[d]}else{i=null}}else{if(Object.prototype.toString.call(e)==="[object RegExp]"){e=e.exec(n.value);if(e!=null){i=e.index;p=i+e[0][d]}}}}}if(typeof i!="undefined"){if(o){o=this[0].createTextRange();o.collapse(true);o.moveStart("character",i);o.moveEnd("character",p-i);o.select()}else{this[0].selectionStart=i;this[0].selectionEnd=p}this[0].focus();return this}else{if(o){p=document.selection;if(this[0].tagName.toLowerCase()!="textarea"){o=this.val();i=p[c]()[b]();i.moveEnd("character",o[d]);var m=i.text==""?o[d]:o.lastIndexOf(i.text);i=p[c]()[b]();i.moveStart("character",-o[d]);var k=i.text[d]}else{i=p[c]();p=i[b]();p.moveToElementText(this[0]);p.setEndPoint("EndToEnd",i);m=p.text[d]-i.text[d];k=m+i.text[d]}}else{m=n.selectionStart;k=n.selectionEnd}i=n.value.substring(m,k);return{start:m,end:k,text:i,replace:function(f){return n.value.substring(0,m)+f+n.value.substring(k,n.value[d])}}}}})(jQuery,"length","createRange","duplicate");