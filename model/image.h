/*

 Copyright (C) 2011 Nicki, Bulgaria.

 See the LICENSE file for terms of use.

*/

#ifndef IMAGE_H
#define IMAGE_H

#include <string>
#include <Wt/Dbo/Types>
#include "product.h"
#include "defines.h"

class Image
{
public:
  std::string name;
  std::string path;
  std::string pathThumb;
  std::string pathSmall;
  std::string pathMedium;
  dbo::ptr<Product> product;
  
  template<class Action> 
  void persist(Action& a)
  {
    dbo::field(a, name, "name");
    dbo::field(a, path, "path");
    dbo::field(a, pathThumb, "pathThumb");
    dbo::field(a, pathSmall, "pathSmall");
    dbo::field(a, pathMedium, "pathMedium");
    dbo::belongsTo(a, product, "product");
  }
};

DBO_EXTERN_TEMPLATES(Image);

#endif // IMAGE_H
