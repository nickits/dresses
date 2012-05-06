#ifndef DATA_PROFILE_H
#define DATA_PROFILE_H
#include "master.h"

namespace data {
	
	class profile : public master{
	public:
		profile() : id(0) {}
		profile(const profile& i){
			id = i.id;
			description = i.description;
		}
		int id;
		std::string description;	
	};

}

#endif
