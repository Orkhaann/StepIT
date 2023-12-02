#pragma once

Vector::Vector(size_t capacity)
{
	while (_capacity <= capacity)
		_capacity += 16;
	_array = new int[_capacity] {};
}

Vector::~Vector()
{
	if (_array == nullptr)
		delete[] _array;
}