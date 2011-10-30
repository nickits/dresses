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
  dbo::ptr<Product> product;
  
  template<class Action> 
  void persist(Action& a)
  {
    dbo::field(a, name, "name");
    dbo::field(a, path, "path");
    dbo::belongsTo(a, product, "product");
  }
};

DBO_EXTERN_TEMPLATES(Image);

#endif // IMAGE_H
