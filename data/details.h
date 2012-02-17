#ifndef DATA_DETAILS_H
#define DATA_DETAILS_H
#include "master.h"

namespace data {
	
	class details : public master{
	public:
		details() : id(0) {}
		details(const details& i){
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
		std::string description;
		std::string price;	
		
	};

}

#endif
