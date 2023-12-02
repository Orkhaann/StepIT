#pragma once

int Product::getId() const
{
	return _id;
}

const char* Product::getName() const
{
	return _name;
}

const char* Product::getDescription() const
{
	return _description;
}

double Product::getPrice() const
{
	return _price;
}

short Product::getDiscount() const
{
	return _discount;
}

void Product::setId(int id)
{
	_id = id;
}

void Product::setName(const char* name)
{
	delete[] _name;
	_name = new char[strlen(name) + 1];
	strcpy_s(_name, strlen(name) + 1, name);
}

void Product::setDescription(const char* description)
{
	delete[] _description;
	size_t length = strlen(description) + 1;
	_description = new char[length];
	strcpy_s(_description, length, description);
}

void Product::setPrice(double price)
{
	_price = price;
}

void Product::setDiscount(short discount)
{
	_discount = discount;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const char* Stock::getName() const
{
	return _name;
}

Product** Stock::getProducts() const
{
	return _products;
}

size_t Stock::getCount() const
{
	return _count;
}

void Stock::setName(const char* name)
{
	delete[] _name;
	_name = new char[strlen(name) + 1];
	strcpy_s(_name, strlen(name) + 1, name);
}

void Stock::setProducts(Product** products, size_t count) {

	for (size_t i = 0; i < _count; ++i)
		delete _products[i];
	delete[] _products;

	_count = count;
	_products = new Product * [_count];
	for (size_t i = 0; i < _count; ++i) {
		_products[i] = new Product(products[i]->getId(), products[i]->getName(), products[i]->getDescription(), products[i]->getPrice(), products[i]->getDiscount());
	}
}

void Stock::setCount(size_t count)
{
	_count = count;
}