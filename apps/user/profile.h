/*
 * Copyright (C) 2011 Nicki, Bulgaria.
 *
 * See the LICENSE file for terms of use.
*/


#ifndef APPS_PROFILE_H
#define APPS_PROFILE_H

#include "usermaster.h"
#include "../../data/profile.h"

namespace apps {


	class profile : public usermaster{
	public:
		
		profile(cppcms::service &s);
		void prepare();
	private:
		void prepare_content(data::profile &c);
	};

}

#endif // DETAILS_H
