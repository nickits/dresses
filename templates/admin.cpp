#line 1 "templates/admin.tmpl"
#include "admin.h" 
#line 2 "templates/admin.tmpl"
namespace skinback {
	#line 3 "templates/admin.tmpl"
	struct admin :public cppcms::base_view
	#line 3 "templates/admin.tmpl"
	{
	#line 3 "templates/admin.tmpl"
		back::admin &content;
	#line 3 "templates/admin.tmpl"
		admin(std::ostream &_s,back::admin &_content): cppcms::base_view(_s),content(_content)
	#line 3 "templates/admin.tmpl"
		{
	#line 3 "templates/admin.tmpl"
		}
		#line 4 "templates/admin.tmpl"
		virtual void render() {
			#line 20 "templates/admin.tmpl"
			out()<<"\n"
				"<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Transitional//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd\">\n"
				"<html xmlns=\"http://www.w3.org/1999/xhtml\">\n"
				"<head>\n"
				"    <link rel=\"stylesheet\" media=\"screen\" href=\"/css/mootools/plugins/omnigrid/omnigrid.css\" type=\"text/css\" />\n"
				"    <link rel=\"stylesheet\" media=\"screen\" href=\"/css/mootools/plugins/MooDropMenu.css\" type=\"text/css\" />\n"
				"    <link rel=\"stylesheet\" href=\"/css/admin/admin.css\" type=\"text/css\" />\n"
				"\t<link rel=\"stylesheet\" href=\"/css/admin/form.css\" type=\"text/css\" />\n"
				"\n"
				"    <script type='text/javascript' src='/js/mootools/mootools-core.js'></script>\n"
				"    <script type='text/javascript' src='/js/mootools/mootools-more.js'></script>\n"
				"    <script type=\"text/javascript\" src=\"/js/mootools/plugins/omnigrid.js\"></script>\n"
				"    <script type=\"text/javascript\" src=\"/js/mootools/plugins/MooDropMenu.js\"></script>\n"
				"    <script type='text/javascript' src='/js/admin/admin.js'></script>\n"
				"\t<script type=\"text/javascript\" src=\"/js/admin/forms.js\"></script>\n"
				"\t<script type=\"text/javascript\">\n"
				"\t\tvar entity = \"";
			#line 20 "templates/admin.tmpl"
			out()<<cppcms::filters::escape(content.entity);
			#line 70 "templates/admin.tmpl"
			out()<<"\";\n"
				"\t</script>\n"
				"\n"
				"    <title>Admin</title>\n"
				"</head>\n"
				"<body>\n"
				"<div id=\"main\">\n"
				"\t<div id=\"menu\">\n"
				"\t\t<ul id=\"nav\"> \n"
				"\t\t\t<li><a href=\"/admin/products\">Home</a>\n"
				"\t\t\t\t<ul>\n"
				"\t\t\t\t\t<li><a href=\"/admin/products\">Products</a></li>\n"
				"\t\t\t\t\t<li><a href=\"/admin/categories\">Categories</a></li>\n"
				"\t\t\t\t\t<li><a href=\"/admin/collections\">Collections</a></li>\n"
				"\t\t\t\t</ul>\n"
				"\t\t\t</li> \n"
				"\t\t\t<li> \n"
				"\t\t\t\t<a href=\"#\">Blog</a> \n"
				"\t\t\t\t<ul> \n"
				"\t\t\t\t\t<li><a href=\"#\">Archive</a></li> \n"
				"\t\t\t\t\t<li> \n"
				"\t\t\t\t\t\t<a href=\"#\">Categories</a> \n"
				"\t\t\t\t\t\t<ul> \n"
				"\t\t\t\t\t\t\t<li><a href=\"#\">Javascript</a></li> \n"
				"\t\t\t\t\t\t\t<li><a href=\"#\">Mootools</a></li> \n"
				"\t\t\t\t\t\t\t<li><a href=\"#\">PHP</a></li> \n"
				"\t\t\t\t\t\t</ul> \n"
				"\t\t\t\t\t</li> \n"
				"\t\t\t\t\t<li><a href=\"#\">Last comment</a></li> \n"
				"\t\t\t\t</ul> \n"
				"\t\t\t</li> \n"
				"\t\t\t<li><a href=\"#\">Contact</a></li> \n"
				"\t\t</ul>\n"
				"\t</div>\n"
				"\t<div id=\"admin_filter\"></div>\n"
				"\t<div id=\"admin_grid\" ></div>\n"
				"</div>\n"
				"<div id=\"modal_frame\"></div>\n"
				"<div id=\"form_frame\">\n"
				"<div id=\"form_container\"></div>\n"
				"</div>\n"
				"<div id=\"confirm_delete\" class=\"popup_frame\">\n"
				"\t<div id=\"confirm_delete_container\">\n"
				"\t\t<div class=\"popup_message\">Delete, really?</div>\n"
				"\t\t<span id=\"delete_ok\" class=\"popup_button\">OK</span>\n"
				"\t\t<span id=\"delete_cancel\" class=\"popup_button\">Cancel</span>\n"
				"\t</div>\n"
				"</div>\n"
				"</body>\n"
				"</html>\n"
				"";
		#line 70 "templates/admin.tmpl"
		} // end of template render
	#line 71 "templates/admin.tmpl"
	}; // end of class admin
#line 72 "templates/admin.tmpl"
} // end of namespace skinback
#line 73 "templates/admin.tmpl"
namespace {
#line 73 "templates/admin.tmpl"
 struct loader { 
#line 73 "templates/admin.tmpl"
  loader() { 
#line 73 "templates/admin.tmpl"
    cppcms::views_pool::mapping_type mapping;
#line 73 "templates/admin.tmpl"
   mapping["admin"]=&cppcms::views_pool::view_builder<skinback::admin,back::admin>;
#line 73 "templates/admin.tmpl"
    cppcms::views_pool::static_instance().add_view("skinback",mapping); 
#line 73 "templates/admin.tmpl"
 }
#line 73 "templates/admin.tmpl"
 ~loader() {  cppcms::views_pool::static_instance().remove_view("skinback"); }
#line 73 "templates/admin.tmpl"
} a_loader;
#line 73 "templates/admin.tmpl"
} // anon 
