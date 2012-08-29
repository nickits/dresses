/*
---
name: MooWatermark
description: mootools based watermark

authors:
  - Magic Web Solutions (http://www.magicwebsolutions.co.uk)

license:
  - MIT-style 

requires:
  core/1.3:   '*'

provides:
  - MooWatermark
...
*/

var MooWatermark = new Class({ 

	initialize: function(options) {
		this.textField = options.textField;
		this.hint = (options.hint ? options.hint : '');
		this.watermarkClass = (options.watermarkClass ? options.watermarkClass : 'moowatermark');
		
		window.addEvent('load', function() {
			if ($(this.textField)){
				$(this.textField).addEvent('focus', this.clearTextFieldValue.bind(this));
				$(this.textField).addEvent('blur', this.setInitialValue.bind(this));
				$(this.textField).addEvent('show', this.clearTextField.bind(this));				
				this.setInitialValue();
				if(Browser.name == 'ie') {
					var form = document.getElementById(this.textField).form;
					if(form) {
						form.attachEvent("onsubmit", this.clearTextFieldValue.bind(this));
					}
				} else {
					if($(this.textField).getParent('form')){
						$($(this.textField).form).addEvent('submit', this.clearTextFieldValue.bind(this));
					}
				}
			}
		}.bind(this));
	},
	
	setInitialValue: function(){
		if ($(this.textField).value == ''){ 
			$(this.textField).value = this.hint;
			$(this.textField).addClass(this.watermarkClass);	
		}
	},
	
	clearTextFieldValue: function(){
		if ($(this.textField).value == this.hint) {
			$(this.textField).value = '';	
		}
		$(this.textField).removeClass(this.watermarkClass);	
	},
	
	showTextField: function(){
		if ($(this.textField).value == ''){ 
			$(this.textField).value = this.hint;
			$(this.textField).addClass(this.watermarkClass);	
		}
		else{
			$(this.textField).addClass(this.watermarkClass);				
		}
	}

});