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

Dresses::Dresses(cppcms::service& srv): application(srv)
{
	attach(new apps::list(srv), "/(\\w+)/(\\w+)/(\\d+)", 3);
	attach(new apps::details(srv), "/(\\w+)/(\\w+)/(\\w+)/(\\d+)", 4);
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
