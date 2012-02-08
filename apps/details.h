/*
 * Copyright (C) 2011 Nicki, Bulgaria.
 *
 * See the LICENSE file for terms of use.
*/


#ifndef DETAILS_H
#define DETAILS_H

#include "master.h"
#include "../data/details.h"

namespace apps {


	class details : public master{
	public:
		
		details(cppcms::service &s);
		void prepare(std::string page);
	private:
		void prepare_content(data::details &c,std::string const &page);
	};

}

#endif // DETAILS_H
