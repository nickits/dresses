/*
 * Copyright (C) 2011 Nicki, Bulgaria.
 *
 * See the LICENSE file for terms of use.
*/

#include <cppcms/url_dispatcher.h>
#include <cppcms/url_mapper.h>
#include <cppcms/session_interface.h>
#include <cppcms/cache_interface.h>

#include "list.h"

namespace apps {

list::list(cppcms::service &srv) : master(srv)
{
//  	mapper().assign("{1}"); // with id
//  	mapper().assign("");    // default
 	dispatcher().assign(".*", &list::prepare, this, 0);
}

void list::prepare_content(data::list &c,std::string const &id)
{
	master::prepare(c);
	c.title += " Selected category";
	c.listTitle = "Selected category";
	data::details details;
	details.id = 0;
	details.title = "Item title";
	details.imgSrc = "/images/no_image.gif";
	details.imgAlt = "Item image alt";
	details.url = "details";
	details.shortDescription = "Item short description";
	details.price = "100.00";	
	std::string details_url = "details";
	const std::string url_sep = "/";
	std::stringstream ss;
	for(int i = 1; i <= 10; i++){
		details.id = i;
		ss.str("");
		ss << details_url << url_sep << i;
		details.url = ss.str();
		c.listDetails.push_back(details);	
	}
	
	render("list",c);
}

void list::prepare(std::string id)
{
	data::list c;
	prepare_content(c,id);
}

}