#ifndef DATA_LIST_H
#define DATA_LIST_H

#include "master.h"

namespace data {
	class item {
	public:
		item() : id(0) {}
		item(const item& i){
			id = i.id;
			title = i.title;
			imgSrc = i.imgSrc;
			imgAlt = i.imgAlt;
			url = i.url;
			shortDescription = i.shortDescription;
			price = i.price;	
		}
		int id;
		std::string title;
		std::string imgSrc;
		std::string imgAlt;
		std::string url;
		std::string shortDescription;
		std::string price;	
	};
		
	class list : public master{
	public:
		list(){}
		
		std::string listTitle;
		
		std::list<item> items;
	};

}

#endif
