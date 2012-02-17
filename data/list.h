#ifndef DATA_LIST_H
#define DATA_LIST_H

#include "master.h"
#include "details.h"


namespace data {	
	class list : public master{
	public:
		list(){}
		
		std::string listTitle;
		
		std::list<details> listDetails;
	};

}

#endif
