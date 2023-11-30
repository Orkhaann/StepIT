#pragma once

class Product
{
private:
	int _id;
	char* _name;
	char* _description;
	double _price;
	short _discount;
public:

	Product();

	explicit Product(int id, const char* name);
	explicit Product(int id, const char* name, const char* description);
	explicit Product(int id, const char* name, const char* description, double price, short discount);

	int getId() const;
	const char* getName() const;
	const char* getDescription() const;
	double getPrice() const;
	short getDiscount() const;

	void setId(int id);
	void setName(const char* name);
	void setDescription(const char* description);
	void setPrice(double price);
	void setDiscount(short discount);

	void print();
	double getDiscountPrice();

	~Product();
};

class Stock
{
private:
	char* _name;
	Product** _products;
	size_t _count;

public:

	Stock();
	explicit Stock(const char* name, size_t count);
	explicit Stock(const char* name, Product**& products, size_t count);

	const char* getName() const;
	Product** getProducts() const;
	size_t getCount() const;

	void setName(const char* name);
	void setProducts(Product** products, size_t count);
	void setCount(size_t count);

	Product* getProductById(int id);
	void print();

	~Stock();
};