#ifndef APPS_MASTER_H
#define APPS_MASTER_H
#include <cppcms/application.h>

#include "../data/master.h"

namespace apps {

class master: public cppcms::application {
public:

	master(cppcms::service &w);

protected:
	void prepare(data::master &c);
};


}


#endif
