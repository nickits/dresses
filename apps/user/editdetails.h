/*
 * Copyright (C) 2011 Nicki, Bulgaria.
 *
 * See the LICENSE file for terms of use.
*/


#ifndef APPS_EDITDETAILS_H
#define APPS_EDITDETAILS_H

#include "usermaster.h"
#include "../../data/details.h"

namespace apps {


	class editdetails : public usermaster{
	public:
		
		editdetails(cppcms::service &s);
		void prepare(std::string page);
	private:
		void prepare_content(data::details &c,std::string const &page);
	};

}

#endif // DETAILS_H
