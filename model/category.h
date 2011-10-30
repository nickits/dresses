/*

 Copyright (C) 2011 Nicki, Bulgaria.

 See the LICENSE file for terms of use.

*/

#ifndef CATEGORY_H
#define CATEGORY_H

#include <string>
#include <Wt/Dbo/Types>
#include "product.h"
#include "defines.h"

class Category
{
public:
  std::string name;
  std::string description;
  Categories children;
  dbo::ptr<Category> parent;
  Products products;
  
  template<class Action> 
  void persist(Action& a)
  {
    dbo::field(a, name, "name");
    dbo::field(a, description, "description");
    dbo::hasMany(a, children, dbo::ManyToOne, "parent");
    dbo::belongsTo(a, parent, "parent");
    dbo::hasMany(a, products, dbo::ManyToOne, "category");
  }
  
};

DBO_EXTERN_TEMPLATES(Category);

#endif // CATEGORY_H
