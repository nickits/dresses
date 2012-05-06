/*

 Copyright (C) 2011 Nicki, Bulgaria.

 See the LICENSE file for terms of use.

*/

#include "dresses.h"
#include <cppcms/service.h>
#include <cppcms/http_response.h>
#include <cppcms/http_request.h>
#include <cppcms/url_dispatcher.h>
#include <bits/stl_multimap.h>
#include <iostream>
#include <sstream>
#include "model/defines.h"
#include "utils/formgenerator.h"
#include "apps/list.h"
#include "apps/details.h"
#include "apps/user/user.h"

Dresses::Dresses(cppcms::service& srv): application(srv)
{
	attach(new apps::list(srv), "/items/(\\d+)", 1);
// mapper().assign("items","/items/{1}");
//	attach(new apps::list(srv), "/items/(\\w+)/(\\d+)", 2);
//	attach(new apps::list(srv), "/items/(\\w+)/(\\w+)/(\\d+)", 3);
//	attach(new apps::list(srv), "/items/(\\w+)/(\\w+)/(\\w+)/(\\d+)", 4);
	attach(new apps::details(srv), "/item/(\\d+)", 1);
//	mapper().assign("item","/item/{1}");
//	attach(new apps::details(srv), "/item/(\\w+)/(\\w+)/(\\d+)", 3);
//	attach(new apps::details(srv), "/item/(\\w+)/(\\w+)/(\\w+)/(\\d+)", 4);
//	attach(new apps::details(srv), "/item/(\\w+)/(\\w+)/(\\w+)/(\\w+)/(\\d+)", 5);
//	attach(new apps::profile(srv), "/user/profile", 0);
//	attach(new apps::useritemslist(srv), "/user/items/(\\w+)", 1);
//	attach(new apps::editdetails(srv), "/user/editdetails/(\\d+)", 1);
//	attach(new apps::user(srv), "user", "/user/{1}", "/user((/.*)?)", 1);
//	attach(new apps::user(srv), "user", "/user/{1}");
	attach(new apps::user(srv), "/user((/.*)?)", 1);

//	mapper().root("/dresses");
}
  
int main(int argc,char ** argv)
{
    try {
        cppcms::service srv(argc,argv);
        srv.applications_pool().mount(cppcms::applications_factory<Dresses>());
        srv.run();
    }
    catch(std::exception const &e) {
        std::cerr << e.what() << std::endl;
    }
}
