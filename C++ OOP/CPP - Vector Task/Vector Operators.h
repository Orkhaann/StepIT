#pragma once

Vector& Vector::operator+(const Vector& Other)
{
	Vector newVect;

	for (int i = 0; i < Other._size; ++i)
		newVect._array[i] = _array[i] + Other._array[i];

	return newVect;
}
bool Vector::operator==(const Vector& Other)
{
	if (_size != Other._size)
		return false;

	for (size_t i = 0; i < _size; i++)
	{
		if (_array[i] != Other._array[i])
			return false;
	}

	return true;
}
bool Vector::operator!=(const Vector& Other)
{
	if (_size != Other._size)
		return true;

	for (size_t i = 0; i < _size; i++)
	{
		if (_array[i] != Other._array[i])
			return true;
	}

	return false;
}
Vector& Vector::operator++()
{
	for (size_t i = 0; i < _size; i++)
		_array[i]++;

	return *this;
}
Vector& Vector::operator--()
{
	for (size_t i = 0; i < _size; i++)
		_array[i]--;

	return *this;
}