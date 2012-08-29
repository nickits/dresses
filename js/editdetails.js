window.addEvent("domready", function(){
	new MooWatermark({
		textField: 'item_edit_title', 
		hint: 'Title',
		watermarkClass: 'watermarkBlue'
	});
	new MooWatermark({
		textField: 'item_edit_shortdesc', 
		hint: 'Short description',
		watermarkClass: 'watermarkBlue'
	}); 
	new MooWatermark({
		textField: 'item_edit_detaildesc', 
		hint: 'Detailed description',
		watermarkClass: 'watermarkBlue'
	}); 
	new MooWatermark({
		textField: 'item_edit_definition', 
		hint: 'Definition',
		watermarkClass: 'watermarkBlue'
	}); 
	new MooWatermark({
		textField: 'item_edit_price', 
		hint: 'Price',
		watermarkClass: 'watermarkBlue'
	}); 
	$("edit_details_info").hide();
	$("item_edit_edit").addEvent('click', function(event){
		$("item_edit_title").set("value", $("item_title").get("text"));
		$("item_edit_shortdesc").set("value", $("item_shortdesc").get("text"));
		$("item_edit_detaildesc").set("value", $("item_detaildesc").get("text"));
		$("item_edit_definition").set("value", $("item_definition").get("text"));
		$("item_edit_price").set("value", $("item_price").get("text"));
		$("item_info").hide();
		$("edit_details_info").show();
	});
	$("item_edit_cancel").addEvent('click', function(event){
		$("edit_details_info").hide();
		$("item_info").show();
	});
	$("item_edit_save").addEvent('click', function(event){
		$("item_title").set("text", $("item_edit_title").get("value"));
		$("item_shortdesc").set("text", $("item_edit_shortdesc").get("value"));
		$("item_detaildesc").set("text", $("item_edit_detaildesc").get("value"));
		$("item_definition").set("text", $("item_edit_definition").get("value"));
		$("item_price").set("text", $("item_edit_price").get("value"));
		$("edit_details_info").hide();
		$("item_info").show();
	});
	var myUpload = new MooUpload('filecontrol', {
		action: 'upload.php',		// Server side upload script
		method: 'auto',				// Automatic upload method (Choose the best)
		onLoad: function() {			
			document.id('filecontrol').grab(new Element('p', { html: '<strong>Best method detected:</strong> '+this.options.method }), 'bottom');
		}
	});

});
