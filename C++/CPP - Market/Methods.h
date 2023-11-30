#pragma once

void Product::print()
{
	cout << "ID: " << _id << endl;
	cout << "Name: " << _name << endl;
	cout << "Description: " << _description << endl;
	cout << "Price: " << _price << endl;
	cout << "Discount: " << _discount << "%" << endl;
}

double Product::getDiscountPrice()
{
	return _price * (1 - _discount / 100.0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Product* Stock::getProductById(int id)
{
	for (size_t i = 0; i < _count; ++i)
	{
		if (_products[i] != nullptr && _products[i]->getId() == id)
			return _products[i];
	}
	return nullptr;
}

void Stock::print()
{
	for (size_t i = 0; i < _count; ++i)
	{
		if (_products[i] != nullptr)
		{
			cout << "Product: " << i + 1 << ":" << endl;
			_products[i]->print();
		}
	}
}