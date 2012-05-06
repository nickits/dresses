/*
 * Copyright (C) 2011 Nicki, Bulgaria.
 *
 * See the LICENSE file for terms of use.
*/

#include <cppcms/url_dispatcher.h>
#include <cppcms/url_mapper.h>
#include <cppcms/session_interface.h>
#include <cppcms/cache_interface.h>

#include "editdetails.h"

namespace apps {

editdetails::editdetails(cppcms::service &srv) : usermaster(srv)
{
//	mapper().assign("{1}"); // with id
//	mapper().assign("");    // default
	dispatcher().assign(".*", &editdetails::prepare, this, 0);
}

void editdetails::prepare_content(data::details &c,std::string const &id)
{
	usermaster::prepare(c);
	
	c.title = id;
	render("user", "editdetails",c);
}

void editdetails::prepare(std::string id)
{
	data::details c;
	prepare_content(c,id);
}

}