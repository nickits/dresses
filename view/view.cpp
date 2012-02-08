#line 1 "view/master.tmpl"
#include "../data/data.h" 
#line 3 "view/master.tmpl"
namespace None {
	#line 4 "view/master.tmpl"
	struct master :public cppcms::base_view
	#line 4 "view/master.tmpl"
	{
	#line 4 "view/master.tmpl"
		data::master &content;
	#line 4 "view/master.tmpl"
		master(std::ostream &_s,data::master &_content): cppcms::base_view(_s),content(_content)
	#line 4 "view/master.tmpl"
		{
	#line 4 "view/master.tmpl"
		}
		#line 6 "view/master.tmpl"
		virtual void title() {
			#line 7 "view/master.tmpl"
			out()<<"\n"
				"\t";
			#line 7 "view/master.tmpl"
			if(!(content.title.empty())) {
				#line 8 "view/master.tmpl"
				out()<<"  \n"
					"\t\t";
				#line 8 "view/master.tmpl"
				out()<<cppcms::filters::escape(content.title);
				#line 9 "view/master.tmpl"
				out()<<"   \n"
					"\t";
			#line 9 "view/master.tmpl"
			}else{
				#line 10 "view/master.tmpl"
				out()<<"  \n"
					"\t\t";
				#line 10 "view/master.tmpl"
				out()<<cppcms::locale::translate("Dresses");
				#line 11 "view/master.tmpl"
				out()<<"\n"
					"\t";
			#line 11 "view/master.tmpl"
			}
			#line 12 "view/master.tmpl"
			out()<<"  \n"
				"";
		#line 12 "view/master.tmpl"
		} // end of template title
		#line 13 "view/master.tmpl"
		virtual void header_more() {
		#line 13 "view/master.tmpl"
		} // end of template header_more
		#line 15 "view/master.tmpl"
		virtual void header() {
			#line 16 "view/master.tmpl"
			out()<<"\n"
				"<title>";
			#line 16 "view/master.tmpl"
			title();
			#line 20 "view/master.tmpl"
			out()<<"</title>\n"
				"<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />\n"
				"\t<link href=\"/css/main.css\" type=\"text/css\" rel=\"stylesheet\" />\n"
				"\t<script type=\"text/javascript\" src=\"/js/mootools-core.js\"></script>\n"
				"\t";
			#line 20 "view/master.tmpl"
			header_more();
			#line 47 "view/master.tmpl"
			out()<<"\n"
				"\t<script type=\"text/javascript\">\n"
				"\t\twindow.addEvent(\"domready\", function(){\n"
				"\t\t\tvar menuItems = $$(\"li.menuItem\");\n"
				"\t\t\tArray.each(menuItems, function(item, index){\n"
				"\t\t\t\titem.addEvent(\"mouseover\", function(){\n"
				"\t\t\t\t\tvar sp = this.getElements(\"span.mainLink\");\n"
				"\t\t\t\t\tif(sp.length > 0){ sp[0].addClass(\"active\"); }\n"
				"\t\t\t\t\tvar divs = this.getElements(\"div.menuItemContainer\");\n"
				"\t\t\t\t\tif(divs.length > 0){ divs[0].addClass(\"show\"); }\n"
				"\t\t\t\t});\t\t\t\n"
				"\t\t\t\titem.addEvent(\"mouseout\", function(){\n"
				"\t\t\t\t\tvar sp = this.getElements(\"span.mainLink\");\n"
				"\t\t\t\t\tif(sp.length > 0){ sp[0].removeClass(\"active\"); }\n"
				"\t\t\t\t\tvar divs = this.getElements(\"div.menuItemContainer\");\n"
				"\t\t\t\t\tif(divs.length > 0){ divs[0].removeClass(\"show\"); }\n"
				"\t\t\t\t});\n"
				"\t\t\t\titem.addEvent(\"click\", function(){\n"
				"\t\t\t\t\tvar items = $$(\"li.menuItem\");\n"
				"\t\t\t\t\tArray.each(items, function(item, index){\t\t\t\t\n"
				"\t\t\t\t\t\titem.removeClass(\"active\"); \n"
				"\t\t\t\t\t});\n"
				"\t\t\t\t\tthis.addClass(\"active\"); \n"
				"\t\t\t\t});\n"
				"\t\t\t});\n"
				"\t\t});\n"
				"\t</script>\n"
				"";
		#line 47 "view/master.tmpl"
		} // end of template header
		#line 49 "view/master.tmpl"
		virtual void render() {
			#line 54 "view/master.tmpl"
			out()<<"\n"
				"<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN\"\n"
				"    \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd\">\n"
				"<html xmlns=\"http://www.w3.org/1999/xhtml\">\n"
				"<head>\n"
				"";
			#line 54 "view/master.tmpl"
			header();
			#line 237 "view/master.tmpl"
			out()<<"\n"
				"</head>\n"
				"<body>\n"
				"\t<div id=\"wrapper\">\n"
				"\t\t<div id=\"header\">\n"
				"\t\t\t<div class=\"message\">some message</div>\t\t\n"
				"\t\t\t<div class=\"title\">some title may be picture</div>\t\t\n"
				"\t\t\t<div class=\"account\">\n"
				"\t\t\t\t<div class=\"basket\">basket ></div> \n"
				"\t\t\t\t<div class=\"itemcount\">123</div> \n"
				"\t\t\t\t<div class=\"login\">login</div>\n"
				"\t\t\t</div>\t\t\n"
				"\t\t</div>\n"
				"\t\t<div id=\"menu\">\n"
				"\t\t\t<ul>\n"
				"\t\t\t\t<li class=\"menuItem\">\n"
				"\t\t\t\t\t<span class=\"mainLink\">Main Category 1</span>\n"
				"\t\t\t\t\t<div class=\"menuItemContainer\">\n"
				"\t\t\t\t\t\t<div class=\"menuItemColumn\">\n"
				"\t\t\t\t\t\t\t<ul>\n"
				"\t\t\t\t\t\t\t\t<li><div class=\"parentCategory\"><a href=\"#\" >Category 1</a></div></li>\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 1</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 2</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 3</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 4</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 5</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 6</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 7</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 8</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 9</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t</ul>\n"
				"\t\t\t\t\t\t</div>\n"
				"\t\t\t\t\t\t<div class=\"vDivider\"></div>\n"
				"\t\t\t\t\t\t<div class=\"menuItemColumn\">\n"
				"\t\t\t\t\t\t\t<ul>\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 1</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 2</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 3</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 4</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 5</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 6</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t</ul>\n"
				"\t\t\t\t\t\t</div>\n"
				"\t\t\t\t\t</div>\t\t\t\t\n"
				"\t\t\t\t</li>\n"
				"\t\t\t\t<li class=\"menuItem\">\n"
				"\t\t\t\t\t<span class=\"mainLink\">Main Category 2</span>\n"
				"\t\t\t\t\t<div class=\"menuItemContainer\">\n"
				"\t\t\t\t\t\t<div class=\"menuItemColumn\">\n"
				"\t\t\t\t\t\t\t<ul>\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 1</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 2</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 3</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 4</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 5</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 6</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 7</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 8</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 9</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t</ul>\n"
				"\t\t\t\t\t\t</div>\n"
				"\t\t\t\t\t\t<div class=\"vDivider\"></div>\n"
				"\t\t\t\t\t\t<div class=\"menuItemColumn\">\n"
				"\t\t\t\t\t\t\t<ul>\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 1</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 2</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 3</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 4</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 5</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 6</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 7</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 8</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 9</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t</ul>\n"
				"\t\t\t\t\t\t</div>\n"
				"\t\t\t\t\t\t<div class=\"vDivider\"></div>\n"
				"\t\t\t\t\t\t<div class=\"menuItemColumn\">\n"
				"\t\t\t\t\t\t\t<ul>\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 1</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 2</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 3</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 4</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 5</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 6</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 7</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 8</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 9</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t</ul>\n"
				"\t\t\t\t\t\t</div>\n"
				"\t\t\t\t\t\t<div class=\"vDivider\"></div>\n"
				"\t\t\t\t\t\t<div class=\"menuItemColumn\">\n"
				"\t\t\t\t\t\t\t<ul>\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 1</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 2</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 3</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 4</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 5</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 6</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 7</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 8</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 9</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t</ul>\n"
				"\t\t\t\t\t\t</div>\n"
				"\t\t\t\t\t\t<div class=\"vDivider\"></div>\n"
				"\t\t\t\t\t\t<div class=\"menuItemColumn\">\n"
				"\t\t\t\t\t\t\t<ul>\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 1</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 2</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 3</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 4</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 5</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 6</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t</ul>\n"
				"\t\t\t\t\t\t</div>\n"
				"\t\t\t\t\t</div>\t\t\t\t\n"
				"\t\t\t\t</li>\n"
				"\t\t\t\t<li class=\"menuItem\">\n"
				"\t\t\t\t\t<span class=\"mainLink\">Main Category 3</span>\n"
				"\t\t\t\t\t<div class=\"menuItemContainer\">\n"
				"\t\t\t\t\t\t<div class=\"menuItemColumn\">\n"
				"\t\t\t\t\t\t\t<ul>\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 1</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 2</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 3</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 4</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 5</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 6</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 7</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 8</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 9</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t</ul>\n"
				"\t\t\t\t\t\t</div>\n"
				"\t\t\t\t\t\t<div class=\"vDivider\"></div>\n"
				"\t\t\t\t\t\t<div class=\"menuItemColumn\">\n"
				"\t\t\t\t\t\t\t<ul>\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 1</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 2</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 3</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 4</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 5</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 6</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t</ul>\n"
				"\t\t\t\t\t\t</div>\n"
				"\t\t\t\t\t</div>\t\t\t\t\n"
				"\t\t\t\t</li>\n"
				"\t\t\t\t<li class=\"menuItem\">\n"
				"\t\t\t\t\t<span class=\"mainLink\">Main Category 4</span>\n"
				"\t\t\t\t\t<div class=\"menuItemContainer\">\n"
				"\t\t\t\t\t\t<div class=\"menuItemColumn\">\n"
				"\t\t\t\t\t\t\t<ul>\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 1</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 2</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 3</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 4</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 5</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 6</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 7</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 8</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 9</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t</ul>\n"
				"\t\t\t\t\t\t</div>\n"
				"\t\t\t\t\t\t<div class=\"vDivider\"></div>\n"
				"\t\t\t\t\t\t<div class=\"menuItemColumn\">\n"
				"\t\t\t\t\t\t\t<ul>\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 1</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 2</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 3</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 4</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 5</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t\t<li><a href=\"#\" >Category Item 6</a></li>\t\t\t\t\t\t\n"
				"\t\t\t\t\t\t\t</ul>\n"
				"\t\t\t\t\t\t</div>\n"
				"\t\t\t\t\t</div>\t\t\t\t\n"
				"\t\t\t\t</li>\n"
				"\t\t\t</ul>\t\t\n"
				"\t\t</div>\t\n"
				"\t\t<div id=\"breadcrumb\">\n"
				"\t\t\t<a href=\"#\" title=\"path1\">path1</a><span class=\"devider\">></span>\n"
				"\t\t\t<a href=\"#\" title=\"path2\">path2</a><span class=\"devider\">></span>\n"
				"\t\t\t<a href=\"#\" title=\"path3\">path3</a><span class=\"devider\">></span>\n"
				"\t\t\t<a href=\"#\" title=\"path4\">path4</a>\t\t\n"
				"\t\t</div>\t\n"
				"\t\t<div id=\"content\">\n"
				"\t\t\t";
			#line 237 "view/master.tmpl"
			content_data();
			#line 244 "view/master.tmpl"
			out()<<"\n"
				"\t\t</div>\t\n"
				"\t\t<div id=\"footer\">fast links</div>\t\n"
				"\t\t<div id=\"footer1\">footer1</div>\t\n"
				"\t</div>\n"
				"</body>\n"
				"</html>\n"
				"";
		#line 244 "view/master.tmpl"
		} // end of template render
		#line 246 "view/master.tmpl"
		virtual void content_data() {
			#line 246 "view/master.tmpl"
			out()<<"<p>content</p>";
		#line 246 "view/master.tmpl"
		} // end of template content_data
	#line 247 "view/master.tmpl"
	}; // end of class master
#line 248 "view/master.tmpl"
} // end of namespace None
#line 1 "view/list.tmpl"
#include "../data/data.h" 
#line 2 "view/list.tmpl"
namespace None {
	#line 3 "view/list.tmpl"
	struct list :public master
	#line 3 "view/list.tmpl"
	{
	#line 3 "view/list.tmpl"
		data::list &content;
	#line 3 "view/list.tmpl"
		list(std::ostream &_s,data::list &_content): master(_s,_content),content(_content)
	#line 3 "view/list.tmpl"
		{
	#line 3 "view/list.tmpl"
		}
		#line 4 "view/list.tmpl"
		virtual void header_more() {
			#line 6 "view/list.tmpl"
			out()<<"\n"
				"\t<link href=\"/css/list.css\" type=\"text/css\" rel=\"stylesheet\" />\n"
				"";
		#line 6 "view/list.tmpl"
		} // end of template header_more
		#line 8 "view/list.tmpl"
		virtual void content_data() {
			#line 12 "view/list.tmpl"
			out()<<"\n"
				"\t\t\t<div id=\"left\">Select criteria</div>\n"
				"\t\t\t<div id=\"center\">\n"
				"\t\t\t\t<div class=\"listtitle\">Item list</div>\t\n"
				"\t\t\t\t";
			#line 12 "view/list.tmpl"
			if((content.items).begin()!=(content.items).end()) {
				#line 13 "view/list.tmpl"
				out()<<"  \n"
					"\t\t\t\t\t";
				#line 13 "view/list.tmpl"
				for(CPPCMS_TYPEOF((content.items).begin()) item__ptr=(content.items).begin(),item__ptr_end=(content.items).end();item__ptr!=item__ptr_end;++item__ptr) {
				#line 13 "view/list.tmpl"
				CPPCMS_TYPEOF(*item__ptr) &item_=*item__ptr;
					#line 16 "view/list.tmpl"
					out()<<"\n"
						"\t\t\t\t\t\t<div class=\"listitem\">\n"
						"\t\t\t\t\t\t\t<div class=\"listimg\">\n"
						"\t\t\t\t\t\t\t\t<a href=\"";
					#line 16 "view/list.tmpl"
					out()<<cppcms::filters::urlencode(item_.url);
					#line 17 "view/list.tmpl"
					out()<<"\" >\n"
						"\t\t\t\t\t\t\t\t\t<img src=\"";
					#line 17 "view/list.tmpl"
					out()<<cppcms::filters::escape(item_.imgSrc);
					#line 17 "view/list.tmpl"
					out()<<"\" alt=\"";
					#line 17 "view/list.tmpl"
					out()<<cppcms::filters::escape(item_.imgAlt);
					#line 21 "view/list.tmpl"
					out()<<"\" />\n"
						"\t\t\t\t\t\t\t\t</a>\n"
						"\t\t\t\t\t\t\t</div>\n"
						"\t\t\t\t\t\t\t<div class=\"listdesc\">\n"
						"\t\t\t\t\t\t\t\t<div class=\"listprice\">";
					#line 21 "view/list.tmpl"
					out()<<cppcms::filters::escape(item_.price);
					#line 22 "view/list.tmpl"
					out()<<"</div>\n"
						"\t\t\t\t\t\t\t\t<div class=\"listshortdesc\">";
					#line 22 "view/list.tmpl"
					out()<<cppcms::filters::escape(item_.shortDescription);
					#line 25 "view/list.tmpl"
					out()<<"</div>\n"
						"\t\t\t\t\t\t\t</div>\n"
						"\t\t\t\t\t\t</div>\t\t\t\n"
						"\t\t\t\t\t";
				#line 25 "view/list.tmpl"
				} // end of item
				#line 26 "view/list.tmpl"
				out()<<"  \n"
					"\t\t\t\t";
			#line 26 "view/list.tmpl"
			}
			#line 29 "view/list.tmpl"
			out()<<"  \n"
				"\t\t\t</div>\n"
				"\t\t\t<div id=\"right\"></div>\t\t\t\t\t\n"
				"";
		#line 29 "view/list.tmpl"
		} // end of template content_data
	#line 32 "view/list.tmpl"
	}; // end of class list
#line 33 "view/list.tmpl"
} // end of namespace None
#line 1 "view/details.tmpl"
#include "../data/data.h" 
#line 2 "view/details.tmpl"
namespace None {
	#line 3 "view/details.tmpl"
	struct details :public master
	#line 3 "view/details.tmpl"
	{
	#line 3 "view/details.tmpl"
		data::details &content;
	#line 3 "view/details.tmpl"
		details(std::ostream &_s,data::details &_content): master(_s,_content),content(_content)
	#line 3 "view/details.tmpl"
		{
	#line 3 "view/details.tmpl"
		}
		#line 4 "view/details.tmpl"
		virtual void header_more() {
			#line 7 "view/details.tmpl"
			out()<<"\n"
				"\t<link href=\"/css/list.css\" type=\"text/css\" rel=\"stylesheet\" />\n"
				"\t<link href=\"/css/details.css\" type=\"text/css\" rel=\"stylesheet\" />\n"
				"";
		#line 7 "view/details.tmpl"
		} // end of template header_more
		#line 9 "view/details.tmpl"
		virtual void content_data() {
			#line 49 "view/details.tmpl"
			out()<<"\n"
				"\t\t\t<div id=\"details\">\n"
				"\t\t\t\t<div id=\"item_pictures\">\n"
				"\t\t\t\t\t<div id=\"main_picture\"><img src=\"#\" alt=\"\" /></div>\n"
				"\t\t\t\t\t<div id=\"all_pictures\">\n"
				"\t\t\t\t\t\t<div class=\"thumb_picture\"><img src=\"#\" alt=\"\" /></div>\t\t\t\t\t\n"
				"\t\t\t\t\t\t<div class=\"thumb_picture\"><img src=\"#\" alt=\"\" /></div>\t\t\t\t\t\n"
				"\t\t\t\t\t\t<div class=\"thumb_picture\"><img src=\"#\" alt=\"\" /></div>\t\t\t\t\t\n"
				"\t\t\t\t\t\t<div class=\"thumb_picture\"><img src=\"#\" alt=\"\" /></div>\t\t\t\t\t\n"
				"\t\t\t\t\t\t<div class=\"thumb_picture\"><img src=\"#\" alt=\"\" /></div>\t\t\t\t\t\n"
				"\t\t\t\t\t\t<div class=\"thumb_picture\"><img src=\"#\" alt=\"\" /></div>\t\t\t\t\t\n"
				"\t\t\t\t\t</div>\n"
				"\t\t\t\t</div>\n"
				"\t\t\t\t<div id=\"item_info\">\n"
				"\t\t\t\t\t<div id=\"item_title\">Item Title</div>\t\t\t\t\n"
				"\t\t\t\t\t<div id=\"item_shortdesc\">Short description Short description Short description Short description</div>\t\t\t\t\n"
				"\t\t\t\t\t<div id=\"item_detaildesc\">\n"
				"\t\t\t\t\t\tDetail description Detail description Detail description Detail description Detail description\n"
				"\t\t\t\t\t\tDetail description Detail description Detail description Detail description Detail description\n"
				"\t\t\t\t\t\tDetail description Detail description Detail description Detail description Detail description\n"
				"\t\t\t\t\t\tDetail description Detail description Detail description Detail description Detail description\n"
				"\t\t\t\t\t</div>\t\n"
				"\t\t\t\t\t<div id=\"item_definition\">Item Definition</div>\n"
				"\t\t\t\t\t<div id=\"add_to_basket\">\n"
				"\t\t\t\t\t\t<div id=\"price\">200.00 lv</div>\n"
				"\t\t\t\t\t\t<div id=\"btn_to_basket\">Add to basket</div>\n"
				"\t\t\t\t\t</div>\t\n"
				"\t\t\t\t\t<div id=\"share\">\n"
				"\t\t\t\t\t\t<div id=\"fbLike\">Like</div>\n"
				"\t\t\t\t\t</div>\t\t\t\t\t\t\t\n"
				"\t\t\t\t</div>\n"
				"\t\t\t</div>\n"
				"\t\t\t<div id=\"related\">\n"
				"\t\t\t\t<div class=\"listtitle\">Related items list</div>\t\n"
				"\t\t\t\t<div class=\"listitem\"><div class=\"listimg\"><a href=\"#\" ><img src=\"#\" alt=\"\" /></a></div><div class=\"listdesc\"></div></div>\t\t\t\n"
				"\t\t\t\t<div class=\"listitem\"><div class=\"listimg\"><a href=\"#\" ><img src=\"#\" alt=\"\" /></a></div><div class=\"listdesc\"></div></div>\t\t\t\n"
				"\t\t\t\t<div class=\"listitem\"><div class=\"listimg\"><a href=\"#\" ><img src=\"#\" alt=\"\" /></a></div><div class=\"listdesc\"></div></div>\t\t\t\n"
				"\t\t\t\t<div class=\"listitem\"><div class=\"listimg\"><a href=\"#\" ><img src=\"#\" alt=\"\" /></a></div><div class=\"listdesc\"></div></div>\t\t\t\n"
				"\t\t\t\t<div class=\"listitem\"><div class=\"listimg\"><a href=\"#\" ><img src=\"#\" alt=\"\" /></a></div><div class=\"listdesc\"></div></div>\t\t\t\t\t\t\n"
				"\t\t\t</div>\n"
				"";
		#line 49 "view/details.tmpl"
		} // end of template content_data
	#line 52 "view/details.tmpl"
	}; // end of class details
#line 53 "view/details.tmpl"
} // end of namespace None
#line 54 "view/details.tmpl"
namespace {
#line 54 "view/details.tmpl"
 cppcms::views::generator my_generator; 
#line 54 "view/details.tmpl"
 struct loader { 
#line 54 "view/details.tmpl"
  loader() { 
#line 54 "view/details.tmpl"
   my_generator.name("None");
#line 54 "view/details.tmpl"
   my_generator.add_view<None::master,data::master>("master",true);
#line 54 "view/details.tmpl"
   my_generator.add_view<None::list,data::list>("list",true);
#line 54 "view/details.tmpl"
   my_generator.add_view<None::details,data::details>("details",true);
#line 54 "view/details.tmpl"
    cppcms::views::pool::instance().add(my_generator);
#line 54 "view/details.tmpl"
 }
#line 54 "view/details.tmpl"
 ~loader() {  cppcms::views::pool::instance().remove(my_generator); }
#line 54 "view/details.tmpl"
} a_loader;
#line 54 "view/details.tmpl"
} // anon 
