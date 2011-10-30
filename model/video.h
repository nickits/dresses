/*

 Copyright (C) 2011 Nicki, Bulgaria.

 See the LICENSE file for terms of use.

*/

#ifndef VIDEO_H
#define VIDEO_H

#include <string>
#include <Wt/Dbo/Types>
#include "product.h"
#include "defines.h"

namespace dbo = Wt::Dbo;

class Video
{
public:
  std::string name;
  std::string path;
  dbo::ptr<Product> product;
  
  template<class Action> 
  void persist(Action& a)
  {
    dbo::field(a, name, "name");
    dbo::field(a, path, "path");
    dbo::belongsTo(a, product, "product");
  }
};

DBO_EXTERN_TEMPLATES(Video);

#endif // VIDEO_H