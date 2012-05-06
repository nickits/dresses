#ifndef APPS_USER_H
#define APPS_USER_H

#include <cppcms/application.h>

namespace apps {

class user: public cppcms::application {
public:
	user(cppcms::service &w);
};


}


#endif
