if(Drupal.jsEnabled){toc_collapse=0;toc_scroll_back_to_top=0;$(document).ready(function(){if(toc_collapse){$(".toc-list").hide();label=Drupal.t("show")}else{label=Drupal.t("hide")}$(".toc-toggle-message").html(' [<a href="#" class="toc-toggle">'+label+"</a>]");$("a.toc-toggle").click(function(){$(".toc-list").slideToggle();var l=$("a.toc-toggle").text();if(l==Drupal.t("hide")){$("a.toc-toggle").text(Drupal.t("show"))}else{$("a.toc-toggle").text(Drupal.t("hide"))}return false});if(toc_scroll_back_to_top&&$.localScroll){$(".toc-list, .toc-back-to-top").localScroll({hash:true})}})}