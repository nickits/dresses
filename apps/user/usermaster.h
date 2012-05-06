#ifndef APPS_USERMASTER_H
#define APPS_USERMASTER_H

#include <cppcms/application.h>

#include "../../data/master.h"

namespace apps {

class usermaster: public cppcms::application {
public:
	usermaster(cppcms::service &w);

protected:
	void prepare(data::master &c);
};


}


#endif
