/*
 * Copyright (C) 2011 Nicki, Bulgaria.
 *
 * See the LICENSE file for terms of use.
*/

#include <cppcms/url_dispatcher.h>
#include <cppcms/url_mapper.h>
#include <cppcms/session_interface.h>
#include <cppcms/cache_interface.h>

#include "details.h"

namespace apps {

details::details(cppcms::service &srv) : master(srv)
{
//	mapper().assign("{1}"); // with id
//	mapper().assign("");    // default
	dispatcher().assign(".*", &details::prepare, this, 0);
}

void details::prepare_content(data::details &c,std::string const &id)
{
	master::prepare(c);
	
	c.title = id;
	render("details",c);
}

void details::prepare(std::string id)
{
	data::details c;
	prepare_content(c,id);
}

}