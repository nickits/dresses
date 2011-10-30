/*

 Copyright (C) 2011 Nicki, Bulgaria.

 See the LICENSE file for terms of use.

*/

#ifndef DRESSES_H
#define DRESSES_H
#include <cppcms/application.h>
#include <cppcms/applications_pool.h>
#include "datasession.h"
#include "templates/content1.h"
#include "templates/content2.h"
#include "templates/admin.h"
#include "utils/jsonutils.h"

typedef std::pair<std::string, std::string> PairString;

class Dresses : public cppcms::application
{
public:
  Dresses(cppcms::service& srv);
  virtual void main(std::string str);
  void test(std::string str);
  void index();
  void category(std::string category);
  void collection(std::string collection);
  void test1();
  void admin(std::string arg);
  void admin();
  void formpost(std::string arg);
  void forminit(std::string arg, std::string id);
  void form(std::string arg);
  void submit();
  void grid(std::string arg);
  void griddata(std::string arg);
  void filterpost(std::string arg);
  void filterinit(std::string arg);
  void del(std::string arg, std::string id);
  
private:
  std::string getCollectionString(const std::string name, const std::string url, const std::string type, bool selected);
  std::string getImageString(std::string name, std::string thumbName);
  void init();
  void render_main();
  void loadCollectionImages();
  void productImage();
  void getRequestData(MapString& params);
  
  DataSession session_;
  front1::content1 message1_;
  front::content message_;
  back::admin message_admin_;
  std::string selCategory;
  std::string selCollection;
};

#endif // DRESSES_H
