(function(o){var u=o.Chart,A=o.addEvent,f=o.removeEvent,g=o.createElement,l=o.discardElement,F=o.css,h=o.merge,b=o.each,d=o.extend,c=Math.max,n=document,q=window,a=o.isTouchDevice,H=o.Renderer.prototype.symbols,G=o.getOptions(),x;d(G.lang,{printChart:"Print chart",downloadPNG:"Download PNG image",downloadJPEG:"Download JPEG image",downloadPDF:"Download PDF document",downloadSVG:"Download SVG vector image",contextButtonTitle:"Chart context menu"});G.navigation={menuStyle:{border:"1px solid #A0A0A0",background:"#FFFFFF",padding:"5px 0"},menuItemStyle:{padding:"0 10px",background:"none",color:"#303030",fontSize:a?"14px":"11px"},menuItemHoverStyle:{background:"#4572A5",color:"#FFFFFF"},buttonOptions:{symbolFill:"#E0E0E0",symbolSize:14,symbolStroke:"#666",symbolStrokeWidth:3,symbolX:12.5,symbolY:10.5,align:"right",buttonSpacing:3,height:22,theme:{fill:"white",stroke:"none"},verticalAlign:"top",width:24}};G.exporting={type:"image/png",url:"http://export.highcharts.com/",buttons:{contextButton:{symbol:"menu",_titleKey:"contextButtonTitle",menuItems:[{textKey:"printChart",onclick:function(){this.print()}},{separator:!0},{textKey:"downloadPNG",onclick:function(){this.exportChart()}},{textKey:"downloadJPEG",onclick:function(){this.exportChart({type:"image/jpeg"})}},{textKey:"downloadPDF",onclick:function(){this.exportChart({type:"application/pdf"})}},{textKey:"downloadSVG",onclick:function(){this.exportChart({type:"image/svg+xml"})}}]}}};o.post=function(i,e){var k,j;j=g("form",{method:"post",action:i,enctype:"multipart/form-data"},{display:"none"},n.body);for(k in e){g("input",{type:"hidden",name:k,value:e[k]},null,j)}j.submit();l(j)};d(u.prototype,{getSVG:function(j){var i=this,r,p,e,k,m=h(i.options,j);if(!n.createElementNS){n.createElementNS=function(t,s){return n.createElement(s)}}j=g("div",null,{position:"absolute",top:"-9999em",width:i.chartWidth+"px",height:i.chartHeight+"px"},n.body);p=i.renderTo.style.width;k=i.renderTo.style.height;p=m.exporting.sourceWidth||m.chart.width||/px$/.test(p)&&parseInt(p,10)||600;k=m.exporting.sourceHeight||m.chart.height||/px$/.test(k)&&parseInt(k,10)||400;d(m.chart,{animation:!1,renderTo:j,forExport:!0,width:p,height:k});m.exporting.enabled=!1;m.series=[];b(i.series,function(s){e=h(s.options,{animation:!1,showCheckbox:!1,visible:s.visible});e.isInternal||m.series.push(e)});r=new o.Chart(m,i.callback);b(["xAxis","yAxis"],function(s){b(i[s],function(t,z){var w=r[s][z],y=t.getExtremes(),v=y.userMin,y=y.userMax;(v!==void 0||y!==void 0)&&w.setExtremes(v,y,!0,!1)})});p=r.container.innerHTML;m=null;r.destroy();l(j);p=p.replace(/zIndex="[^"]+"/g,"").replace(/isShadow="[^"]+"/g,"").replace(/symbolName="[^"]+"/g,"").replace(/jQuery[0-9]+="[^"]+"/g,"").replace(/url\([^#]+#/g,"url(#").replace(/<svg /,'<svg xmlns:xlink="http://www.w3.org/1999/xlink" ').replace(/ href=/g," xlink:href=").replace(/\n/," ").replace(/<\/svg>.*?$/,"</svg>").replace(/&nbsp;/g," ").replace(/&shy;/g,"").replace(/<IMG /g,"<image ").replace(/height=([^" ]+)/g,'height="$1"').replace(/width=([^" ]+)/g,'width="$1"').replace(/hc-svg-href="([^"]+)">/g,'xlink:href="$1"/>').replace(/id=([^" >]+)/g,'id="$1"').replace(/class=([^" >]+)/g,'class="$1"').replace(/ transform /g," ").replace(/:(path|rect)/g,"$1").replace(/style="([^"]+)"/g,function(s){return s.toLowerCase()});p=p.replace(/(url\(#highcharts-[0-9]+)&quot;/g,"$1").replace(/&quot;/g,"'");p.match(/ xmlns="/g).length===2&&(p=p.replace(/xmlns="[^"]+"/,""));return p},exportChart:function(i,e){var i=i||{},j=this.options.exporting,j=this.getSVG(h({chart:{borderRadius:0}},j.chartOptions,e,{exporting:{sourceWidth:i.sourceWidth||j.sourceWidth,sourceHeight:i.sourceHeight||j.sourceHeight}})),i=h(this.options.exporting,i);o.post(i.url,{filename:i.filename||"chart",type:i.type,width:i.width||0,scale:i.scale||2,svg:j})},print:function(){var j=this,i=j.container,r=[],p=i.parentNode,m=n.body,k=m.childNodes;if(!j.isPrinting){j.isPrinting=!0,b(k,function(s,e){if(s.nodeType===1){r[e]=s.style.display,s.style.display="none"}}),m.appendChild(i),q.focus(),q.print(),setTimeout(function(){p.appendChild(i);b(k,function(s,e){if(s.nodeType===1){s.style.display=r[e]}});j.isPrinting=!1},1000)}},contextMenu:function(N,M,L,K,J,E,I){var D=this,r=D.options.navigation,w=r.menuItemStyle,v=D.chartWidth,C=D.chartHeight,t="cache-"+N,y=D[t],z=c(J,E),m,B,p;if(!y){D[t]=y=g("div",{className:"highcharts-"+N},{position:"absolute",zIndex:1000,padding:z+"px"},D.container),m=g("div",null,d({MozBoxShadow:"3px 3px 10px #888",WebkitBoxShadow:"3px 3px 10px #888",boxShadow:"3px 3px 10px #888"},r.menuStyle),y),B=function(){F(y,{display:"none"});I&&I.setState(0);D.openMenu=!1},A(y,"mouseleave",function(){p=setTimeout(B,500)}),A(y,"mouseenter",function(){clearTimeout(p)}),b(M,function(i){if(i){var e=i.separator?g("hr",null,null,m):g("div",{onmouseover:function(){F(this,r.menuItemHoverStyle)},onmouseout:function(){F(this,w)},onclick:function(){B();i.onclick.apply(D,arguments)},innerHTML:i.text||D.options.lang[i.textKey]},d({cursor:"pointer"},w),m);D.exportDivElements.push(e)}}),D.exportDivElements.push(m,y),D.exportMenuWidth=y.offsetWidth,D.exportMenuHeight=y.offsetHeight}N={display:"block"};L+D.exportMenuWidth>v?N.right=v-L-J-z+"px":N.left=L-z+"px";K+E+D.exportMenuHeight>C?N.bottom=C-K-z+"px":N.top=K+E-z+"px";F(y,N);D.openMenu=!0},addButton:function(D){var C=this,B=C.renderer,D=h(C.options.navigation.buttonOptions,D),z=D.onclick,t=D.menuItems,w,y,v={stroke:D.symbolStroke,fill:D.symbolFill},e=D.symbolSize||12;if(!C.btnCount){C.btnCount=0}C.btnCount++;if(!C.exportDivElements){C.exportDivElements=[],C.exportSVGElements=[]}if(D.enabled!==!1){var p=D.theme,k=p.states,r=k&&k.hover,k=k&&k.select,s;delete p.states;z?s=function(){z.apply(C,arguments)}:t&&(s=function(){C.contextMenu("contextmenu",t,y.translateX,y.translateY,y.width,y.height,y);y.setState(2)});D.text&&D.symbol?p.paddingLeft=o.pick(p.paddingLeft,25):D.text||d(p,{width:D.width,height:D.height,padding:0});y=B.button(D.text,0,0,s,p,r,k).attr({title:C.options.lang[D._titleKey],"stroke-linecap":"round"});D.symbol&&(w=B.symbol(D.symbol,D.symbolX-e/2,D.symbolY-e/2,e,e).attr(d(v,{"stroke-width":D.symbolStrokeWidth||1,zIndex:1})).add(y));y.add().align(d(D,{width:y.width,x:o.pick(D.x,x)}),!0,"spacingBox");x+=(y.width+D.buttonSpacing)*(D.align==="right"?-1:1);C.exportSVGElements.push(y,w)}},destroyExport:function(i){var i=i.target,e,j;for(e=0;e<i.exportSVGElements.length;e++){if(j=i.exportSVGElements[e]){j.onclick=j.ontouchstart=null,i.exportSVGElements[e]=j.destroy()}}for(e=0;e<i.exportDivElements.length;e++){j=i.exportDivElements[e],f(j,"mouseleave"),i.exportDivElements[e]=j.onmouseout=j.onmouseover=j.ontouchstart=j.onclick=null,l(j)}}});H.menu=function(i,e,k,j){return["M",i,e+2.5,"L",i+k,e+2.5,"M",i,e+j/2+0.5,"L",i+k,e+j/2+0.5,"M",i,e+j-1.5,"L",i+k,e+j-1.5]};u.prototype.callbacks.push(function(i){var e,k=i.options.exporting,j=k.buttons;x=0;if(k.enabled!==!1){for(e in j){i.addButton(j[e])}A(i,"destroy",i.destroyExport)}})})(Highcharts);