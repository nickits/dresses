#line 1 "/home/nicki/projects/dresses/templates/content2.tmpl"
#include "content2.h" 
#line 2 "/home/nicki/projects/dresses/templates/content2.tmpl"
namespace skinfront {
	#line 3 "/home/nicki/projects/dresses/templates/content2.tmpl"
	struct content2 :public cppcms::base_view
	#line 3 "/home/nicki/projects/dresses/templates/content2.tmpl"
	{
	#line 3 "/home/nicki/projects/dresses/templates/content2.tmpl"
		front::content &content;
	#line 3 "/home/nicki/projects/dresses/templates/content2.tmpl"
		content2(std::ostream &_s,front::content &_content): cppcms::base_view(_s),content(_content)
	#line 3 "/home/nicki/projects/dresses/templates/content2.tmpl"
		{
	#line 3 "/home/nicki/projects/dresses/templates/content2.tmpl"
		}
		#line 4 "/home/nicki/projects/dresses/templates/content2.tmpl"
		virtual void render() {
			#line 14 "/home/nicki/projects/dresses/templates/content2.tmpl"
			out()<<"\n"
				"<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Transitional//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd\">\n"
				"<html xmlns=\"http://www.w3.org/1999/xhtml\">\n"
				"<head>\n"
				"\t<meta name=\"author\" content=\"Wink Hosting (www.winkhosting.com)\" />\n"
				"\t<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />\n"
				"\t<link rel=\"stylesheet\" href=\"/css/redtie/style.css\" type=\"text/css\" />\n"
				"\t<title>RedTie</title>\n"
				"</head>\n"
				"<body>\n"
				"<div>";
			#line 14 "/home/nicki/projects/dresses/templates/content2.tmpl"
			out()<<cppcms::filters::escape(content.text);
			#line 77 "/home/nicki/projects/dresses/templates/content2.tmpl"
			out()<<"</div>\n"
				"\t<div id=\"page\" align=\"center\">\n"
				"\t\t<div id=\"content\" style=\"width:800px\">\n"
				"\t\t\t<div id=\"logo\">\n"
				"\t\t\t\t<div style=\"margin-top:70px\" class=\"whitetitle\">RedTie</div>\n"
				"\t\t\t</div>\n"
				"\t\t\t<div id=\"topheader\">\n"
				"\t\t\t\t<div align=\"left\" class=\"bodytext\">\n"
				"\t\t\t\t\t<br />\n"
				"\t\t\t\t\t<strong>Your Company Name</strong><br />\n"
				"\t\t\t\t\tEvergreen Terrace 742<br />\n"
				"\t\t\t\t\tKansas Missouri<br />\n"
				"\t\t\t\t\tPhone: 432-653-3121<br />\n"
				"\t\t\t\t\tsales@thetiecompany.com\n"
				"\t\t\t\t</div>\n"
				"\t\t\t\t<div id=\"toplinks\" class=\"smallgraytext\">\n"
				"\t\t\t\t\t<a href=\"#\">Home</a> | <a href=\"#\">Sitemap</a> | <a href=\"#\">Contact Us</a>\n"
				"\t\t\t\t</div>\n"
				"\t\t\t</div>\n"
				"\t\t\t<div id=\"menu\">\n"
				"\t\t\t\t<div align=\"right\" class=\"smallwhitetext\" style=\"padding:9px;\">\n"
				"\t\t\t\t\t<a href=\"#\">Home</a> | <a href=\"#\">About Us</a> | <a href=\"#\">Products</a> | <a href=\"#\">Our Services</a> | <a href=\"#\">Contact Us</a>\n"
				"\t\t\t\t</div>\n"
				"\t\t\t</div>\n"
				"\t\t\t<div id=\"submenu\">\n"
				"\t\t\t\t<div align=\"right\" class=\"smallgraytext\" style=\"padding:9px;\">\n"
				"\t\t\t\t\t<a href=\"#\">Submenu 1</a> | <a href=\"#\">Submenu 2</a> | <a href=\"#\">Submenu 3</a> | <a href=\"#\">Submenu 4</a> | <a href=\"#\">Submenu 5</a> | <a href=\"#\">Submenu 6</a>\n"
				"\t\t\t\t</div>\n"
				"\t\t\t</div>\n"
				"\t\t\t<div id=\"contenttext\">\n"
				"\t\t\t\t<div style=\"padding:10px\">\n"
				"\t\t\t\t\t<span class=\"titletext\">Welcome to RedTie!</span>\n"
				"\t\t\t\t\t</div>\n"
				"\t\t\t\t\t<div class=\"bodytext\" style=\"padding:12px;\" align=\"justify\">\n"
				"\t\t\t\t\t<strong>Hi! This is my third design for OSWD, with CSS and XHTML 1.0 Transitional Validation. You can do whatever you want with this template, just keep the Hosting Colombia link\tat the bottom. Enjoy!\t\t\t  </strong><br />\n"
				"\t\t\t\t\t<br />\n"
				"\t\t\t\t\tLorem ipsum dolor sit amet, consectetuer adipiscing elit. Curabitur id est   tincidunt nisl pellentesque tincidunt. Donec in mauris. Mauris neque magna,   consectetuer id, malesuada vitae, tincidunt sit amet, mi. Aliquam lacinia.   Suspendisse potenti. Proin justo lorem, rutrum ac, facilisis in, malesuada sed,   ligula. Mauris lobortis lacus at nibh. Aenean vitae odio vel odio placerat   hendrerit. Suspendisse lacus lacus, tempor id, pharetra eget, ornare sit amet,   pede. Sed aliquet, justo ac elementum pretium, arcu leo placerat est, a luctus   purus diam eget arcu. Nam augue diam, mollis a, scelerisque eget, aliquet   condimentum, pede. Vestibulum tristique lectus sed augue.<br /><br />\n"
				"\t\t\t\t\tAenean ut mauris luctus mauris interdum convallis. Nunc vestibulum sodales nulla. Nulla vitae massa. Maecenas vel tellus vitae elit mattis adipiscing. In pulvinar felis sed est. Mauris non mi. Duis ultrices dolor ut orci. Quisque lacinia arcu et purus. Sed euismod metus nec augue. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Nunc dolor leo, aliquam a, placerat sit amet, accumsan eget, dolor. Sed lacinia augue in magna. Fusce sed enim. Vestibulum et mauris. Phasellus in lectus. Pellentesque eu elit in dolor ullamcorper sodales. Vestibulum interdum ornare ligula. Mauris felis odio, rhoncus sed, adipiscing fermentum, tincidunt eu, metus. Suspendisse viverra rhoncus purus.\n"
				"\t\t\t\t</div>\n"
				"\t\t\t</div>\n"
				"\t\t\t<div id=\"leftpanel\">\n"
				"\t\t\t\t<div align=\"justify\" class=\"graypanel\">\n"
				"\t\t\t\t\t<span class=\"smalltitle\">News</span><br /><br />\n"
				"\t\t\t\t\t<span class=\"smallredtext\">September 27, 2006</span><br />\n"
				"\t\t\t\t\t<span class=\"bodytext\">Curabitur arcu tellus, suscipit in, aliquam eget, ultricies id, sapien. Nam est.</span><br />\n"
				"\t\t\t\t\t<a href=\"#\" class=\"smallgraytext\">More...</a><br /><br />\n"
				"\t\t\t\t\t<span class=\"smallredtext\">September 27, 2006</span><br />\n"
				"\t\t\t\t\t<span class=\"bodytext\">Curabitur arcu tellus, suscipit in, aliquam eget, ultricies id, sapien. Nam est.</span><br />\n"
				"\t\t\t\t\t<a href=\"#\" class=\"smallgraytext\">More...</a><br /><br />\n"
				"\t\t\t\t\t<span class=\"smallredtext\">September 27, 2006</span><br />\n"
				"\t\t\t\t\t<span class=\"bodytext\">Curabitur arcu tellus, suscipit in, aliquam eget, ultricies id, sapien. Nam est.</span><br />\n"
				"\t\t\t\t\t<a href=\"#\" class=\"smallgraytext\">More...</a><br /><br />\n"
				"\t\t\t\t</div>\n"
				"\t\t\t</div>\n"
				"\t\t\t<div id=\"footer\" class=\"smallgraytext\">\n"
				"\t\t\t\t<a href=\"#\">Home</a> | <a href=\"#\">About Us</a> | <a href=\"#\">Products</a> | <a href=\"#\">Our Services</a> | <a href=\"#\">Contact Us</a>\n"
				"\t\t\t\t| Your Company Name \n"
				"\t\t\t\t&copy; 2007 | <a href=\"http://www.winkhosting.com\" target=\"_blank\">Hosting Colombia</a> \n"
				"\t\t\t</div>\n"
				"\t\t</div>\n"
				"\t</div>\n"
				"</body>\n"
				"</html>\n"
				"";
		#line 77 "/home/nicki/projects/dresses/templates/content2.tmpl"
		} // end of template render
	#line 78 "/home/nicki/projects/dresses/templates/content2.tmpl"
	}; // end of class content2
#line 79 "/home/nicki/projects/dresses/templates/content2.tmpl"
} // end of namespace skinfront
#line 80 "/home/nicki/projects/dresses/templates/content2.tmpl"
namespace {
#line 80 "/home/nicki/projects/dresses/templates/content2.tmpl"
 struct loader { 
#line 80 "/home/nicki/projects/dresses/templates/content2.tmpl"
  loader() { 
#line 80 "/home/nicki/projects/dresses/templates/content2.tmpl"
    cppcms::views_pool::mapping_type mapping;
#line 80 "/home/nicki/projects/dresses/templates/content2.tmpl"
   mapping["content2"]=&cppcms::views_pool::view_builder<skinfront::content2,front::content>;
#line 80 "/home/nicki/projects/dresses/templates/content2.tmpl"
    cppcms::views_pool::static_instance().add_view("skinfront",mapping); 
#line 80 "/home/nicki/projects/dresses/templates/content2.tmpl"
 }
#line 80 "/home/nicki/projects/dresses/templates/content2.tmpl"
 ~loader() {  cppcms::views_pool::static_instance().remove_view("skinfront"); }
#line 80 "/home/nicki/projects/dresses/templates/content2.tmpl"
} a_loader;
#line 80 "/home/nicki/projects/dresses/templates/content2.tmpl"
} // anon 
