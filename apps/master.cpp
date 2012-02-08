#include "master.h"

#include <cppcms/json.h>
#include <cppcms/session_interface.h>
#include <cppcms/url_mapper.h>
#include <iostream>

namespace apps {

master::master(cppcms::service &srv) : cppcms::application(srv)
{	
}

void master::prepare(data::master &c)
{
	c.title="Стоки";
}


} // namespace apps
