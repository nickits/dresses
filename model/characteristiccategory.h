/*
 * Copyright (C) 2011 Nicki, Bulgaria.
 *
 * See the LICENSE file for terms of use.
*/


#ifndef CHARACTERISTICCATEGORY_H
#define CHARACTERISTICCATEGORY_H

#include "defines.h"

class CharacteristicCategory
{
public:
	std::string name;
	std::string description;
	std::string shortDescription;
	Characteristics characteristics;

	template<class Action> 
	void persist(Action& a)
	{
		dbo::field(a, name, "name");
		dbo::field(a, description, "description");
		dbo::field(a, shortDescription, "shortDescription");
		dbo::hasMany(a, characteristics, dbo::ManyToOne, "category");
	}
};

DBO_EXTERN_TEMPLATES(CharacteristicCategory);

#endif // CHARACTERISTICCATEGORY_H
