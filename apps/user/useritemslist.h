/*
 * Copyright (C) 2011 Nicki, Bulgaria.
 *
 * See the LICENSE file for terms of use.
*/


#ifndef APPS_USERITEMLIST_H
#define APPS_USERITEMLIST_H

#include <cppcms/application.h>

#include "usermaster.h"
#include "../../data/list.h"

namespace apps {


	class useritemslist : public usermaster{
	public:
		
		useritemslist(cppcms::service &s);
		void prepare(std::string id);
	private:
		void prepare_content(data::list &c,std::string const &id);
	};

}

#endif // LIST_H
