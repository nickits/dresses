/*
 * Copyright (C) 2011 Nicki, Bulgaria.
 *
 * See the LICENSE file for terms of use.
*/

#include <cppcms/url_dispatcher.h>
#include <cppcms/url_mapper.h>
#include <cppcms/session_interface.h>
#include <cppcms/cache_interface.h>

#include "profile.h"

namespace apps {

profile::profile(cppcms::service &srv) : usermaster(srv)
{
//	mapper().assign("{1}"); // with id
//	mapper().assign("");    // default
	dispatcher().assign(".*", &profile::prepare, this);
}

void profile::prepare_content(data::profile &c)
{
	usermaster::prepare(c);
	
	c.title = "Profile";
	render("user", "profile",c);
}

void profile::prepare()
{
	data::profile c;
	prepare_content(c);
}

}