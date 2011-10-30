/*
 * Copyright (C) 2011 Nicki, Bulgaria.
 *
 * See the LICENSE file for terms of use.
*/


#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <Wt/Dbo/Types>
#include "collection.h"
#include "category.h"
#include "image.h"
#include "video.h"
#include "defines.h"

class Product
{
public:
	std::string name;
	std::string description;
	std::string mainImage;
	std::string mainImageThumb;

	dbo::ptr<Category> category;
	dbo::ptr<Collection> collection;
	Images images;
	Videos videos;

	template<class Action> 
	void persist(Action& a)
	{
		dbo::field(a, name, "name");
		dbo::field(a, description, "description");
		dbo::field(a, mainImage, "mainImage");
		dbo::field(a, mainImageThumb, "mainImageThumb");
		dbo::belongsTo(a, category, "category");
		dbo::belongsTo(a, collection, "collection");
		dbo::hasMany(a, images, dbo::ManyToOne, "dress");
		dbo::hasMany(a, videos, dbo::ManyToOne, "dress");
	}
};

DBO_EXTERN_TEMPLATES(Product);

#endif // PRODUCT_H
