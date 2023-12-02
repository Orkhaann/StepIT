#pragma once

class Vector {
private:
	int* _array = NULL;
	size_t _size = 0;
	size_t  _capacity = 16;
public:
	Vector() = default;
	Vector(size_t capacity);

	int* getData() const { return _array; }
	size_t size() const { return _size; }
	size_t capacity() const { return _capacity; }

	Vector& push_back(int item);
	Vector& push_front(int item);
	void print() const;

	int& operator[](int index);
	int& operator()(int index);

	Vector& pop_back();
	Vector& pop_front();

	void delete_by_index(const size_t index);
	void insert_by_index(const size_t index, const int element);

	size_t find(const int element);
	size_t rfind(const int element);
	void sort(bool reverse);

	Vector& operator+(const Vector& Other);
	bool operator==(const Vector& Other);
	bool operator!=(const Vector& Other);
	Vector& operator++();
	Vector& operator--();

	~Vector();
};