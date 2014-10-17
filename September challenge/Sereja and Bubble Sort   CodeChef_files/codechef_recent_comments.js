Drupal.behaviors.codechef_recent_comments=function(n){$("#comments").children("div.comment").each(function(){var n;var e;e=$(this).attr("id");n=e.slice(1,e.length);$("a.publish",this).click(function(){return publish_comment(n)});$("a.unpublish",this).click(function(){return unpublish_comment(n)})})};var unpublish_comment=function(n){var e=confirm("You can not undo?");if(!e){return false}$.ajax({url:"/comment/unpublish/"+n,beforeSend:function(){$("ul.links","#c"+n).append('<img id="comment-ajax-loader" src="/misc/loader-icon.gif" />')},success:function(n){$("#comment-ajax-loader").remove();$("#c"+n).addClass("comment-unpublished");if($("a.delete","#c"+n).attr("class")=="delete unpublish"){$("#c"+n).remove()}$("a.unpublish","#c"+n).unbind("click").addClass("publish").removeClass("unpublish").html("Publish").click(function(){return publish_comment(n)})},error:function(){alert("Oops!, something went wrong.");$("#comment-ajax-loader").remove()}});return false};var publish_comment=function(n){$.ajax({url:"/comment/publish/"+n,beforeSend:function(){$("ul.links","#c"+n).append('<img id="comment-ajax-loader" src="/misc/loader-icon.gif" />')},success:function(n){$("#comment-ajax-loader").remove();$("#c"+n).removeClass("comment-unpublished");$("a.publish","#c"+n).unbind("click").addClass("unpublish").removeClass("publish").html("Un-publish").click(function(){return unpublish_comment(n)})},error:function(n){alert("Oops!, something went wrong.");$("#comment-ajax-loader").remove()}});return false};