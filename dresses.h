/*

 Copyright (C) 2011 Nicki, Bulgaria.

 See the LICENSE file for terms of use.

*/

#ifndef DRESSES_H
#define DRESSES_H
#include <cppcms/application.h>
#include <cppcms/applications_pool.h>
#include "datasession.h"
#include "utils/jsonutils.h"

typedef std::pair<std::string, std::string> PairString;

class Dresses : public cppcms::application
{
public:
  Dresses(cppcms::service& srv);
  
  DataSession session_;
};

#endif // DRESSES_H
