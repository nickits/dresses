#line 1 "templates/content1.tmpl"
#include "content1.h" 
#line 2 "templates/content1.tmpl"
namespace skinfront1 {
	#line 3 "templates/content1.tmpl"
	struct content1 :public cppcms::base_view
	#line 3 "templates/content1.tmpl"
	{
	#line 3 "templates/content1.tmpl"
		front1::content1 &content;
	#line 3 "templates/content1.tmpl"
		content1(std::ostream &_s,front1::content1 &_content): cppcms::base_view(_s),content(_content)
	#line 3 "templates/content1.tmpl"
		{
	#line 3 "templates/content1.tmpl"
		}
		#line 4 "templates/content1.tmpl"
		virtual void render() {
			#line 19 "templates/content1.tmpl"
			out()<<"\n"
				"<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd\">\n"
				"<html xmlns=\"http://www.w3.org/1999/xhtml\" xml:lang=\"en\" lang=\"en\">\n"
				"<head>\n"
				"\n"
				"<meta http-equiv=\"content-type\" content=\"text/html; charset=utf-8\" />\n"
				"<link rel=\"stylesheet\" type=\"text/css\" href=\"/css/nature/pom.css\"  />\n"
				"<link rel=\"stylesheet\" type=\"text/css\" href=\"/css/dresses.css\"  />\n"
				"<script type='text/javascript' src='/js/mootools/mootools-core.js'></script>\n"
				"<script type='text/javascript' src='/js/mootools/mootools-more.js'></script>\n"
				"<script type='text/javascript' src='/js/mootools/plugins/tree-acordion.js'></script>\n"
				"<script type='text/javascript' src='/js/mootools/plugins/Moo3DCarousel.js'></script>\n"
				"<script type='text/javascript' src='/js/dresses.js'></script>\n"
				"\n"
				"<script type='text/javascript'>\n"
				"  var sellectionType = \"";
			#line 19 "templates/content1.tmpl"
			out()<<cppcms::filters::escape(content.sellectionType);
			#line 40 "templates/content1.tmpl"
			out()<<"\";\n"
				"</script>\n"
				"<title>Pomme</title>\n"
				"\n"
				"</head>\n"
				"\n"
				"<body><div id=\"wrap\">\n"
				"\n"
				"<div id=\"header\"><br />\n"
				"\n"
				"<h3>www.your site.com</h3>\n"
				"<p><strong>\"your slogan can be here tm \"</strong><br />\n"
				"  (or anything else )</p>\n"
				"</div>\n"
				"<img  src=\"/css/nature/images/header.jpg\" width=\"1000\" height=\"128\" alt=\"\" />\n"
				"<div id=\"avmenu\">\n"
				"<h2 class=\"hide\">Menu:</h2>\n"
				"<ul id='root'>\n"
				"    <li>\n"
				"        <a href='javascript:;' class='acord-handle'>COLLECTIONS</a>\n"
				"        <ul class='branch' id='collections'>\n"
				"\t      ";
			#line 40 "templates/content1.tmpl"
			out()<<cppcms::filters::raw(content.collections);
			#line 49 "templates/content1.tmpl"
			out()<<"\n"
				"        </ul>\n"
				"    </li>\n"
				"    <li>\n"
				"        <a href='javascript:;' class='acord-handle'>CATEGORIES</a>\n"
				"        <ul class='branch' id='categories'>\n"
				"<!--            <li><a href='javascript:;' class='acord-handle'>Category1</a>\n"
				"            </li>\n"
				"-->\n"
				"\t      ";
			#line 49 "templates/content1.tmpl"
			out()<<cppcms::filters::raw(content.categories);
			#line 80 "templates/content1.tmpl"
			out()<<"\n"
				"        </ul>\n"
				"    </li>\n"
				"</ul>\n"
				"\n"
				"<div class=\"announce\">\n"
				"<h3>Whats new  ?</h3>\n"
				"<p><strong>4 Janvier , 2007:</strong><br />\n"
				"elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim </p>\n"
				"<p class=\"textright\"><a href=\"index.html\">More Info...</a></p>\n"
				"</div>\n"
				"\n"
				"</div>\n"
				"\n"
				"<div id=\"extras\">\n"
				"<h3>&nbsp;<br />\n"
				"  More Info:</h3>\n"
				"<p> consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut</p>\n"
				"\n"
				"<h3>Links:</h3>\n"
				"<p><img src=\"/css/nature/images/arrow.gif\" alt=\"arrow\" width=\"7\" height=\"7\" /> <a href=\"#\">Link 1</a><br />\n"
				"  <img src=\"/css/nature/images/arrow.gif\" alt=\"arrow\" width=\"7\" height=\"7\" />  <a href=\"#\">Link 2</a><br />\n"
				"  <img src=\"/css/nature/images/arrow.gif\" alt=\"arrow\" width=\"7\" height=\"7\" />  <a href=\"#\">Link 3</a><br />\n"
				"</p>\n"
				"\n"
				"<p class=\"small\">Dezign<br />(4 Janv, 2007)<br />\n"
				"<a href=\"http://validator.w3.org/check/referer\">Validate XHTML 1.0 Strict</a><br /> and Css </p>\n"
				"</div>\n"
				"\n"
				"<div id=\"content\">\n"
				"\n"
				"<div>";
			#line 80 "templates/content1.tmpl"
			out()<<cppcms::filters::raw(content.collectionImages);
			#line 81 "templates/content1.tmpl"
			out()<<"</div>\n"
				"<div>";
			#line 81 "templates/content1.tmpl"
			out()<<cppcms::filters::raw(content.productImage);
			#line 91 "templates/content1.tmpl"
			out()<<"</div>\n"
				"\n"
				"</div>\n"
				"\n"
				"<div id=\"footer\">\n"
				"Copyright &copy; 2007 (your name). Design by kty <a href=\"http://www.studio-plume.org\">studio-plume.org</a> for <a href=\"http://www.oswd.org/\">OSWD</a>.</div>\n"
				"\n"
				"</div>\n"
				"</body>\n"
				"</html>\n"
				"";
		#line 91 "templates/content1.tmpl"
		} // end of template render
	#line 92 "templates/content1.tmpl"
	}; // end of class content1
#line 93 "templates/content1.tmpl"
} // end of namespace skinfront1
#line 94 "templates/content1.tmpl"
namespace {
#line 94 "templates/content1.tmpl"
 cppcms::views::generator my_generator; 
#line 94 "templates/content1.tmpl"
 struct loader { 
#line 94 "templates/content1.tmpl"
  loader() { 
#line 94 "templates/content1.tmpl"
   my_generator.name("skinfront1");
#line 94 "templates/content1.tmpl"
   my_generator.add_view<skinfront1::content1,front1::content1>("content1",true);
#line 94 "templates/content1.tmpl"
    cppcms::views::pool::instance().add(my_generator);
#line 94 "templates/content1.tmpl"
 }
#line 94 "templates/content1.tmpl"
 ~loader() {  cppcms::views::pool::instance().remove(my_generator); }
#line 94 "templates/content1.tmpl"
} a_loader;
#line 94 "templates/content1.tmpl"
} // anon 
