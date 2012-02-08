/*
 * Copyright (C) 2011 Nicki, Bulgaria.
 *
 * See the LICENSE file for terms of use.
*/


#ifndef LIST_H
#define LIST_H

#include <cppcms/application.h>

#include "master.h"
#include "../data/list.h"

namespace apps {


	class list : public master{
	public:
		
		list(cppcms::service &s);
		void prepare(std::string id);
	private:
		void prepare_content(data::list &c,std::string const &id);
	};

}

#endif // LIST_H
