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
	data::item item;
	item.id = 0;
	item.title = "Item title";
	item.imgSrc = "/images/no_image.gif";
	item.imgAlt = "Item image alt";
	item.url = "item_url";
	item.shortDescription = "Item short description";
	item.price = "100.00";	
	std::string item_url = "item_url";
	const std::string url_sep = "/";
	std::stringstream ss;
	for(int i = 1; i <= 10; i++){
		item.id = i;
		ss.str("");
		ss << item_url << url_sep << i;
		item.url = ss.str();
		c.items.push_back(item);	
	}
	
	render("list",c);
}

void list::prepare(std::string id)
{
	data::list c;
	prepare_content(c,id);
}

}