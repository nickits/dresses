/*

 Copyright (C) 2011 Nicki, Bulgaria.

 See the LICENSE file for terms of use.

*/

#include "dresses.h"
#include <cppcms/service.h>
#include <cppcms/http_response.h>
#include <cppcms/http_request.h>
#include <cppcms/url_dispatcher.h>
#include <bits/stl_multimap.h>
#include <iostream>
#include <sstream>
#include "templates/content1.h"
#include "templates/content2.h"
#include "templates/admin.h"
#include "model/defines.h"
#include "utils/formgenerator.h"

Dresses::Dresses(cppcms::service& srv): application(srv)
{
    dispatcher().assign("", &Dresses::index, this);
    dispatcher().assign("/", &Dresses::index, this);
    dispatcher().assign("/category/(\\w+)", &Dresses::category, this, 1);
    dispatcher().assign("/collection/([A-Za-z0-9_ ]+)", &Dresses::collection, this, 1);
    dispatcher().assign("/test", &Dresses::test1, this);
    dispatcher().assign("/submit", &Dresses::submit, this);
    dispatcher().assign("/grid/(\\w+)", &Dresses::grid, this, 1);
    dispatcher().assign("/griddata/(\\w+)", &Dresses::griddata, this, 1);
    dispatcher().assign("/filterinit/(\\w+)", &Dresses::filterinit, this, 1);
    dispatcher().assign("/filterpost/(\\w+)", &Dresses::filterpost, this, 1);
    dispatcher().assign("/form/(\\w+)", &Dresses::form, this, 1);
    dispatcher().assign("/forminit/(\\w+)/(\\d+)", &Dresses::forminit, this, 1, 2);
    dispatcher().assign("/formpost/(\\w+)", &Dresses::formpost, this, 1);
    dispatcher().assign("/delete/(\\w+)/(\\d+)", &Dresses::del, this, 1, 2);
    dispatcher().assign("/(\\d+)", &Dresses::test, this, 1);
    dispatcher().assign("/(\\w+)", &Dresses::admin, this, 1);
}

void Dresses::main(std::string str)
{
  cppcms::application::main(str);
}
    
void Dresses::test(std::string str)
{
  dbo::Transaction transaction(session_);

/*  dbo::ptr<Category> cat1 = session_.find<Category>().where("id = ?").bind(str);

  if(!cat1){
    Category* category = new Category();
    category->name = "Category" + str;
    category->description = "Desc" + str;
    dbo::ptr<Category> catPtr = session_.add(category);
  }
 
  dbo::ptr<Collection> coll1 = session_.find<Collection>().where("id = ?").bind(str);

  if(!coll1){
    Collection* collection = new Collection();
    collection->name = "Collection" + str;
    collection->description = "Desc" + str;
    dbo::ptr<Collection> collPtr = session_.add(collection);
  }*/
  

  std::stringstream st, st1, st2, st3;
  Category* category;
  for(int i = 1; i <=4; i++){
    category = new Category();
    st << "Category" << i;
    category->name = st.str();
    st1 << "Desc" << i;
    category->description =st1.str();
    session_.add(category);
    st.str("");
    st1.str("");
  }
  
  Collection* collection = new Collection();
  collection->name = "Anelia";
  collection->description = "Desc Anelia";
  dbo::ptr<Collection> collAnelia = session_.add(collection);
  
  collection = new Collection();
  collection->name = "Tania Veronique";
  collection->description = "Desc Tania Veronique";
  dbo::ptr<Collection> collTania = session_.add(collection);

  Product* product;
  for(int j = 1; j <= 11; j++){
    product = new Product();
    st << "Product" << j;
    product->name = st.str();
    st1 << collAnelia->description << j;
    product->description = st1.str();
//     st2 << j << ".jpg";
//     product->mainImage = st2.str();
//     st3 << j << "-m.jpg";
//     product->mainImageThumb = st3.str();
    
    product->collection = collAnelia;
    session_.add(product);
    st.str("");
    st1.str("");
    st2.str("");
    st3.str("");
    
    int k = j + 100;
    product = new Product();
    st << "Product" << k;
    product->name = st.str();
    st1 << collTania->description << k;
    product->description = st1.str();
//     st2 << j << ".jpg";
//     product->mainImage = st2.str();
//     st3 << j << "-m.jpg";
//     product->mainImageThumb = st3.str();
    product->collection = collTania;
    session_.add(product);
    st.str("");
    st1.str("");
    st2.str("");
    st3.str("");
  }
  transaction.commit();      
    
  st <<  ">>>.......Hello.......<<<" ;
  
  front::content c;
  c.text= st.str();
  render("skinfront", "content2",c);
}

///initial
void Dresses::init()
{
  dbo::Transaction transaction(session_);

  if(selCategory.empty() && selCollection.empty()){
    dbo::ptr<Collection> firstColl = session_.find<Collection>().orderBy("name").limit(1);
    if(firstColl){
      selCollection = firstColl->name;
    }
     message1_.sellectionType = "collection";
  }
  else if(selCategory.empty()){
     message1_.sellectionType = "collection";  
  }
  else if(selCollection.empty()){
     message1_.sellectionType = "category";  
  }

  ///collections
  std::string strCollection;
  Collections collections = session_.find<Collection>().orderBy("name");
  for(Collections::const_iterator i = collections.begin(); i != collections.end(); i++)
  {
    strCollection.append(getCollectionString((*i)->name, (*i)->name, "collection", (*i)->name == selCollection));
  }

  ///categories
  std::string strCategories;
  Categories categories = session_.find<Category>().orderBy("name");
  for(Categories::const_iterator i = categories.begin(); i != categories.end(); i++)
  {
    strCategories.append(getCollectionString((*i)->name, (*i)->name, "category", (*i)->name == selCategory));
  }

  transaction.commit();

  message1_.collections = strCollection;
  message1_.categories = strCategories;
}

void Dresses::render_main()
{
//  init();
  render("skinfront1", "content1",message1_);
}

///main page
void Dresses::index()
{
  if(request().script_name() == "/admin"){
      admin("");
      return;
  }

  selCategory.clear();
  selCollection.clear();
  init();
  loadCollectionImages();
  render_main();
}

///select category
void Dresses::category(std::string category)
{
  selCollection.clear();
  selCategory = category;
  init();
  loadCollectionImages();
  render_main();
  
}

///select collection
void Dresses::collection(std::string collection)
{
  selCollection = collection;
  selCategory.clear();
  init();
  loadCollectionImages();
  render_main();
}

void Dresses::loadCollectionImages()
{
  std::stringstream st;
  
  bool hasCollection = false;
  st << "<div id=\"carousel-3\">";

  dbo::Transaction transaction(session_);  

  if(!selCollection.empty())
  {
    dbo::ptr<Collection> coll = session_.find<Collection>().where("name=?").bind(selCollection);
    if(coll)
    {
      if(coll->products.size() > 0){
	for(Products::const_iterator p = coll->products.begin(); p != coll->products.end(); p++){
//	    st << getImageString((*p)->mainImage, (*p)->mainImageThumb);
	}
	hasCollection = true;
      }
    }
  }
  else if(!selCategory.empty())
  {
    dbo::ptr<Category> cat = session_.find<Category>().where("name=?").bind(selCategory);
    if(cat)
    {
      if(cat->products.size() > 0){
	for(Products::const_iterator p = cat->products.begin(); p != cat->products.end(); p++){
//	    st << getImageString((*p)->mainImage, (*p)->mainImageThumb);
	}
	hasCollection = true;
      }     
    }
  }

  transaction.commit();

  st << "</div>"
     << "<div id=\"carousel-3-focus\"></div>"
     << "<div class=\"clear\"></div>";
  
  message1_.collectionImages = hasCollection ? st.str() : "";
}

void Dresses::productImage()
{

}

///collection and category menu item
std::string Dresses::getCollectionString(const std::string name, const std::string url, const std::string type, bool selected)
{
  std::string style_selected = selected ? "style=\"font-weight:bold;\"" : "";
  std::stringstream st;
  st << "<li>" 
      << "<a href=\"" << request().script_name() << "/" << type << "/" << url <<"\" class=\"acord-handle\" " << style_selected << ">" << name << "</a>"
      << "</li>";
  return st.str();
}

std::string Dresses::getImageString(std::string name, std::string thumbName)
{
  std::stringstream st;
  st << "<a href=\"/images/" << name << "\" title=\"image\">"
     << "<img src=\"/images/" << thumbName << "\" width=\"150\" height=\"100\" alt=\"\" title=\"\">"
     << "</a>" << std::endl;
  return st.str();
}

void Dresses::test1()
{
  cppcms::json::value val;
  cppcms::json::array arr;
  arr.push_back(1);
  arr.push_back(2);
  arr.push_back(3);
  arr.push_back(4);
  val.at("a.b.c.d", arr);
  val.at("a.b.c.a", arr);
  val.at("a.b.c.b", arr);
  val.at("a.b.c.c", arr);
  response().out() << val;
}

void Dresses::admin(std::string arg)
{
    message_admin_.entity = arg;
	
    session().load();
    int i = 0;
    std::string stri = session().get("iii", "0");
    std::stringstream ss;
    ss.str(stri);
    ss >> i;
    std::cout << i++ << std::endl;
    std::stringstream si;
    si << i;
    std::cout << si.str() << std::endl;
    session().set("iii", si.str());
    std::cout << session().get("iii", "0") << std::endl;
    session().save();
    std::cout << session().age() << std::endl;
    std::cout << session().expiration() << std::endl;

    render("skinback", "admin", message_admin_);
}

void Dresses::grid(std::string arg)
{
	MapString mapParams;
	getRequestData(mapParams);
	FormGenerator generator(arg, mapParams, session_);
	response().out() << generator.grid();
}

void Dresses::griddata(std::string arg)
{
	MapString mapParams;
	getRequestData(mapParams);
	FormGenerator generator(arg, mapParams, session_);
	response().out() << generator.grid_data();
}

void Dresses::filterinit(std::string arg)
{
	MapString mapParams;
	getRequestData(mapParams);
	FormGenerator generator(arg, mapParams, session_);
	response().out() << generator.filter();
}

void Dresses::filterpost(std::string arg)
{
	MapString mapParams;
	getRequestData(mapParams);
	FormGenerator generator(arg, mapParams, session_);
	response().out() << generator.filterpost();
}

void Dresses::getRequestData(MapString& mapParams)
{
	cppcms::http::request::form_type req = request().post_or_get();
	for(cppcms::http::request::form_type::iterator i = req.begin(); i != req.end(); ++i){
		mapParams.insert(PairString(i->first, i->second));
	}
}

void Dresses::admin()
{
}

void Dresses::form(std::string arg)
{
}

void Dresses::formpost(std::string arg)
{
	MapString mapParams;
	getRequestData(mapParams);
	FormGenerator generator(arg, mapParams, session_);
	response().out() << generator.formpost();
}

void Dresses::forminit(std::string arg, std::string id)
{
	MapString mapParams;
	getRequestData(mapParams);
	mapParams.insert(PairString("id", id));
	FormGenerator generator(arg, mapParams, session_);
	response().out() << generator.form();
}

void Dresses::del(std::string arg, std::string id)
{
	MapString mapParams;
	getRequestData(mapParams);
	mapParams.insert(PairString("id", id));
	FormGenerator generator(arg, mapParams, session_);
	response().out() << generator.del();
}

void Dresses::submit()
{
  response().out() << "submit";
}
  
int main(int argc,char ** argv)
{
    try {
        cppcms::service srv(argc,argv);
        srv.applications_pool().mount(cppcms::applications_factory<Dresses>());
        srv.run();
    }
    catch(std::exception const &e) {
        std::cerr << e.what() << std::endl;
    }
}
