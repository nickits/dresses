#include "user.h"

#include <cppcms/json.h>
#include <cppcms/session_interface.h>
#include <cppcms/url_mapper.h>
#include <iostream>
#include "editdetails.h"
#include "profile.h"
#include "useritemslist.h"

namespace apps {

user::user(cppcms::service& w): application(w)
{
	attach(new apps::profile(w), "/profile", 0);
	attach(new apps::useritemslist(w), "/items/(\\w+)", 1);
	attach(new apps::editdetails(w), "/editdetails/(\\d+)", 1);

}

} // namespace apps
