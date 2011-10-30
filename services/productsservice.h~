/*
 * Copyright (C) 2011 Nicki, Assenovgrad, Bulgaria.
 *
 * See the LICENSE file for terms of use.
 */

#ifndef PRODUCTSSERVICE_H
#define PRODUCTSSERVICE_H
#include "baseservice.h"
#include "../model/product.h"

class ProductsService : public BaseService<Product>
{
public:
	ProductsService();
	ProductsService(DataSession* session);
	virtual Product get(MapAny& params);
	virtual Products list(MapAny& params);
	virtual Products listAll();
	virtual void save(Product& entity);
};

#endif // PRODUCTSSERVICE_H
