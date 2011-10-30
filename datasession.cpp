/*

 Copyright (C) 2011 Nicki, Bulgaria.

 See the LICENSE file for terms of use.

*/

#include "datasession.h"
#include "model/product.h"
#include "model/category.h"
#include "model/collection.h"
#include "model/image.h"
#include "model/video.h"
#include <iostream>

DataSession::DataSession(): connection_("dresses.db")
{
  initialize();
}

void DataSession::initialize()
{
    setConnection(connection_);
    
    mapClass<Product>("product");
    mapClass<Category>("category");
    mapClass<Collection>("collection");
    mapClass<Image>("image");
    mapClass<Video>("video");

    try{
      dbo::Transaction t(*this);
      
      createTables();
      
      t.commit();
      
      std::cerr << "Database created";
    }
    catch(std::exception e){
      //std::cerr << e.what() << std::endl;
      std::cerr << "Using existing database";
    }
}

