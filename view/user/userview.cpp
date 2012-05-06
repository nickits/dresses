#line 1 "view/user/master.tmpl"
#include "../../data/data.h" 
#line 3 "view/user/master.tmpl"
namespace user {
	#line 4 "view/user/master.tmpl"
	struct usermaster :public cppcms::base_view
	#line 4 "view/user/master.tmpl"
	{
	#line 4 "view/user/master.tmpl"
		data::master &content;
	#line 4 "view/user/master.tmpl"
		usermaster(std::ostream &_s,data::master &_content): cppcms::base_view(_s),content(_content)
	#line 4 "view/user/master.tmpl"
		{
	#line 4 "view/user/master.tmpl"
		}
		#line 6 "view/user/master.tmpl"
		virtual void title() {
			#line 7 "view/user/master.tmpl"
			out()<<"\n"
				"\t";
			#line 7 "view/user/master.tmpl"
			if(!(content.title.empty())) {
				#line 8 "view/user/master.tmpl"
				out()<<"  \n"
					"\t\t";
				#line 8 "view/user/master.tmpl"
				out()<<cppcms::filters::escape(content.title);
				#line 9 "view/user/master.tmpl"
				out()<<"   \n"
					"\t";
			#line 9 "view/user/master.tmpl"
			}else{
				#line 10 "view/user/master.tmpl"
				out()<<"  \n"
					"\t\t";
				#line 10 "view/user/master.tmpl"
				out()<<cppcms::locale::translate("Dresses");
				#line 11 "view/user/master.tmpl"
				out()<<"\n"
					"\t";
			#line 11 "view/user/master.tmpl"
			}
			#line 12 "view/user/master.tmpl"
			out()<<"  \n"
				"";
		#line 12 "view/user/master.tmpl"
		} // end of template title
		#line 13 "view/user/master.tmpl"
		virtual void header_more() {
		#line 13 "view/user/master.tmpl"
		} // end of template header_more
		#line 15 "view/user/master.tmpl"
		virtual void header() {
			#line 16 "view/user/master.tmpl"
			out()<<"\n"
				"<title>";
			#line 16 "view/user/master.tmpl"
			title();
			#line 20 "view/user/master.tmpl"
			out()<<"</title>\n"
				"<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />\n"
				"\t<link href=\"/css/main.css\" type=\"text/css\" rel=\"stylesheet\" />\n"
				"\t<script type=\"text/javascript\" src=\"/js/mootools-core.js\"></script>\n"
				"\t";
			#line 20 "view/user/master.tmpl"
			header_more();
			#line 47 "view/user/master.tmpl"
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
		#line 47 "view/user/master.tmpl"
		} // end of template header
		#line 49 "view/user/master.tmpl"
		virtual void render() {
			#line 54 "view/user/master.tmpl"
			out()<<"\n"
				"<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN\"\n"
				"    \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd\">\n"
				"<html xmlns=\"http://www.w3.org/1999/xhtml\">\n"
				"<head>\n"
				"";
			#line 54 "view/user/master.tmpl"
			header();
			#line 90 "view/user/master.tmpl"
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
				"\t\t\t\t\t<a href=\"/user/profile\" class=\"mainLink\">Profile</a>\n"
				"\t\t\t\t</li>\n"
				"\t\t\t\t<li class=\"menuItem\">\n"
				"\t\t\t\t\t<a href=\"/user/items/currentdeals\" class=\"mainLink\">Current Deals</a>\n"
				"\t\t\t\t</li>\n"
				"\t\t\t\t<li class=\"menuItem\">\n"
				"\t\t\t\t\t<a href=\"/user/items/sold\" class=\"mainLink\">Sold Items</a>\n"
				"\t\t\t\t</li>\n"
				"\t\t\t\t<li class=\"menuItem\">\n"
				"\t\t\t\t\t<a href=\"/user/items/buyed\" class=\"mainLink\">Buyed Items</a>\n"
				"\t\t\t\t</li>\n"
				"\t\t\t</ul>\n"
				"\t\t</div>\t\n"
				"\t\t<div id=\"breadcrumb\">\n"
				"\t\t\t<a href=\"#\" title=\"path1\">path1</a><span class=\"devider\">></span>\n"
				"\t\t\t<a href=\"#\" title=\"path2\">path2</a><span class=\"devider\">></span>\n"
				"\t\t\t<a href=\"#\" title=\"path3\">path3</a><span class=\"devider\">></span>\n"
				"\t\t\t<a href=\"#\" title=\"path4\">path4</a>\t\t\n"
				"\t\t</div>\t\n"
				"\t\t<div id=\"content\">\n"
				"\t\t\t";
			#line 90 "view/user/master.tmpl"
			content_data();
			#line 97 "view/user/master.tmpl"
			out()<<"\n"
				"\t\t</div>\t\n"
				"\t\t<div id=\"footer\">fast links</div>\t\n"
				"\t\t<div id=\"footer1\">footer1</div>\t\n"
				"\t</div>\n"
				"</body>\n"
				"</html>\n"
				"";
		#line 97 "view/user/master.tmpl"
		} // end of template render
		#line 99 "view/user/master.tmpl"
		virtual void content_data() {
			#line 99 "view/user/master.tmpl"
			out()<<"<p>content</p>";
		#line 99 "view/user/master.tmpl"
		} // end of template content_data
	#line 100 "view/user/master.tmpl"
	}; // end of class usermaster
#line 101 "view/user/master.tmpl"
} // end of namespace user
#line 1 "view/user/list.tmpl"
#include "../../data/data.h" 
#line 2 "view/user/list.tmpl"
namespace user {
	#line 3 "view/user/list.tmpl"
	struct useritemslist :public usermaster
	#line 3 "view/user/list.tmpl"
	{
	#line 3 "view/user/list.tmpl"
		data::list &content;
	#line 3 "view/user/list.tmpl"
		useritemslist(std::ostream &_s,data::list &_content): usermaster(_s,_content),content(_content)
	#line 3 "view/user/list.tmpl"
		{
	#line 3 "view/user/list.tmpl"
		}
		#line 4 "view/user/list.tmpl"
		virtual void header_more() {
			#line 6 "view/user/list.tmpl"
			out()<<"\n"
				"\t<link href=\"/css/list.css\" type=\"text/css\" rel=\"stylesheet\" />\n"
				"";
		#line 6 "view/user/list.tmpl"
		} // end of template header_more
		#line 8 "view/user/list.tmpl"
		virtual void content_data() {
			#line 12 "view/user/list.tmpl"
			out()<<"\n"
				"\t\t\t<div id=\"left\">Select criteria</div>\n"
				"\t\t\t<div id=\"center\">\n"
				"\t\t\t\t<div class=\"listtitle\">Item list</div>\t\n"
				"\t\t\t\t";
			#line 12 "view/user/list.tmpl"
			if((content.listDetails).begin()!=(content.listDetails).end()) {
				#line 13 "view/user/list.tmpl"
				out()<<"  \n"
					"\t\t\t\t\t";
				#line 13 "view/user/list.tmpl"
				for(CPPCMS_TYPEOF((content.listDetails).begin()) item__ptr=(content.listDetails).begin(),item__ptr_end=(content.listDetails).end();item__ptr!=item__ptr_end;++item__ptr) {
				#line 13 "view/user/list.tmpl"
				CPPCMS_TYPEOF(*item__ptr) &item_=*item__ptr;
					#line 16 "view/user/list.tmpl"
					out()<<"\n"
						"\t\t\t\t\t\t<div class=\"listitem\">\n"
						"\t\t\t\t\t\t\t<div class=\"listimg\">\n"
						"\t\t\t\t\t\t\t\t<a href=\"";
					#line 16 "view/user/list.tmpl"
					out()<<cppcms::filters::urlencode(item_.url);
					#line 17 "view/user/list.tmpl"
					out()<<"\" >\n"
						"\t\t\t\t\t\t\t\t\t<img src=\"";
					#line 17 "view/user/list.tmpl"
					out()<<cppcms::filters::escape(item_.imgSrc);
					#line 17 "view/user/list.tmpl"
					out()<<"\" alt=\"";
					#line 17 "view/user/list.tmpl"
					out()<<cppcms::filters::escape(item_.imgAlt);
					#line 21 "view/user/list.tmpl"
					out()<<"\" />\n"
						"\t\t\t\t\t\t\t\t</a>\n"
						"\t\t\t\t\t\t\t</div>\n"
						"\t\t\t\t\t\t\t<div class=\"listdesc\">\n"
						"\t\t\t\t\t\t\t\t<div class=\"listprice\">";
					#line 21 "view/user/list.tmpl"
					out()<<cppcms::filters::escape(item_.price);
					#line 22 "view/user/list.tmpl"
					out()<<"</div>\n"
						"\t\t\t\t\t\t\t\t<div class=\"listshortdesc\">";
					#line 22 "view/user/list.tmpl"
					out()<<cppcms::filters::escape(item_.shortDescription);
					#line 25 "view/user/list.tmpl"
					out()<<"</div>\n"
						"\t\t\t\t\t\t\t</div>\n"
						"\t\t\t\t\t\t</div>\t\t\t\n"
						"\t\t\t\t\t";
				#line 25 "view/user/list.tmpl"
				} // end of item
				#line 26 "view/user/list.tmpl"
				out()<<"  \n"
					"\t\t\t\t";
			#line 26 "view/user/list.tmpl"
			}
			#line 29 "view/user/list.tmpl"
			out()<<"  \n"
				"\t\t\t</div>\n"
				"\t\t\t<div id=\"right\"></div>\t\t\t\t\t\n"
				"";
		#line 29 "view/user/list.tmpl"
		} // end of template content_data
	#line 32 "view/user/list.tmpl"
	}; // end of class useritemslist
#line 33 "view/user/list.tmpl"
} // end of namespace user
#line 1 "view/user/details.tmpl"
#include "../../data/data.h" 
#line 2 "view/user/details.tmpl"
namespace user {
	#line 3 "view/user/details.tmpl"
	struct editdetails :public usermaster
	#line 3 "view/user/details.tmpl"
	{
	#line 3 "view/user/details.tmpl"
		data::details &content;
	#line 3 "view/user/details.tmpl"
		editdetails(std::ostream &_s,data::details &_content): usermaster(_s,_content),content(_content)
	#line 3 "view/user/details.tmpl"
		{
	#line 3 "view/user/details.tmpl"
		}
		#line 4 "view/user/details.tmpl"
		virtual void header_more() {
			#line 7 "view/user/details.tmpl"
			out()<<"\n"
				"\t<link href=\"/css/list.css\" type=\"text/css\" rel=\"stylesheet\" />\n"
				"\t<link href=\"/css/details.css\" type=\"text/css\" rel=\"stylesheet\" />\n"
				"";
		#line 7 "view/user/details.tmpl"
		} // end of template header_more
		#line 9 "view/user/details.tmpl"
		virtual void content_data() {
			#line 49 "view/user/details.tmpl"
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
		#line 49 "view/user/details.tmpl"
		} // end of template content_data
	#line 52 "view/user/details.tmpl"
	}; // end of class editdetails
#line 53 "view/user/details.tmpl"
} // end of namespace user
#line 1 "view/user/profile.tmpl"
#include "../../data/data.h" 
#line 2 "view/user/profile.tmpl"
namespace user {
	#line 3 "view/user/profile.tmpl"
	struct profile :public usermaster
	#line 3 "view/user/profile.tmpl"
	{
	#line 3 "view/user/profile.tmpl"
		data::profile &content;
	#line 3 "view/user/profile.tmpl"
		profile(std::ostream &_s,data::profile &_content): usermaster(_s,_content),content(_content)
	#line 3 "view/user/profile.tmpl"
		{
	#line 3 "view/user/profile.tmpl"
		}
		#line 4 "view/user/profile.tmpl"
		virtual void header_more() {
			#line 7 "view/user/profile.tmpl"
			out()<<"\n"
				"\t<link href=\"/css/list.css\" type=\"text/css\" rel=\"stylesheet\" />\n"
				"\t<link href=\"/css/details.css\" type=\"text/css\" rel=\"stylesheet\" />\n"
				"";
		#line 7 "view/user/profile.tmpl"
		} // end of template header_more
		#line 9 "view/user/profile.tmpl"
		virtual void content_data() {
			#line 49 "view/user/profile.tmpl"
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
		#line 49 "view/user/profile.tmpl"
		} // end of template content_data
	#line 52 "view/user/profile.tmpl"
	}; // end of class profile
#line 53 "view/user/profile.tmpl"
} // end of namespace user
#line 54 "view/user/profile.tmpl"
namespace {
#line 54 "view/user/profile.tmpl"
 cppcms::views::generator my_generator; 
#line 54 "view/user/profile.tmpl"
 struct loader { 
#line 54 "view/user/profile.tmpl"
  loader() { 
#line 54 "view/user/profile.tmpl"
   my_generator.name("user");
#line 54 "view/user/profile.tmpl"
   my_generator.add_view<user::usermaster,data::master>("usermaster",true);
#line 54 "view/user/profile.tmpl"
   my_generator.add_view<user::useritemslist,data::list>("useritemslist",true);
#line 54 "view/user/profile.tmpl"
   my_generator.add_view<user::editdetails,data::details>("editdetails",true);
#line 54 "view/user/profile.tmpl"
   my_generator.add_view<user::profile,data::profile>("profile",true);
#line 54 "view/user/profile.tmpl"
    cppcms::views::pool::instance().add(my_generator);
#line 54 "view/user/profile.tmpl"
 }
#line 54 "view/user/profile.tmpl"
 ~loader() {  cppcms::views::pool::instance().remove(my_generator); }
#line 54 "view/user/profile.tmpl"
} a_loader;
#line 54 "view/user/profile.tmpl"
} // anon 
