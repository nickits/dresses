#include "usermaster.h"

#include <cppcms/json.h>
#include <cppcms/session_interface.h>
#include <cppcms/url_mapper.h>
#include <iostream>

namespace apps {

usermaster::usermaster(cppcms::service& w): application(w)
{

}

void usermaster::prepare(data::master& c)
{
	c.title="Стоки";
}


} // namespace apps
