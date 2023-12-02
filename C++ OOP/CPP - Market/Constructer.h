#pragma once

Product::Product()
{
	int _id(0);
	char* _name = nullptr;
	char* _description = nullptr;
	double _price = 0;
	short _discount = 0;
};

Product::Product(int id, const char* name)
{
	_id = id;
	setName(name);
	_description = nullptr;
	_price = 0;
	_discount = 0;
}

Product::Product(int id, const char* name, const char* description)
{
	_id = id;
	setName(name);
	setDescription(description);
	_price = 0;
	_discount = 0;
}

Product::Product(int id, const char* name, const char* description, double price, short discount)
{
	_id = id;
	setName(name);
	setDescription(description);
	_price = price;
	_discount = discount;
}

Product::~Product()
{
	delete[] _name;
	delete[] _description;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Stock::Stock()
{
	_name = nullptr;
	_products = nullptr;
	_count = 0;
}

Stock::Stock(const char* name, size_t count)
{
	setName(name);
	_count = count;
};

Stock::Stock(const char* name, Product**& products ,size_t count)
{
	setName(name);
	setProducts(products, count);
	_count = count;
};

Stock::~Stock()
{
	delete[] _name;
	for (size_t i = 0; i < _count; ++i)
		delete _products[i];
	delete[] _products;
}