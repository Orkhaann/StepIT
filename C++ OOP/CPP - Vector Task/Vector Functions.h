#pragma once

Vector& Vector::push_back(int item)
{
	if (_size < _capacity)
	{
		_array[_size] = item;
		_size++;
		return *this;
	}

	_capacity += 16;
	int* temp = new int[_capacity];
	for (size_t i = 0; i < _size; i++)
		temp[i] = _array[i];



	temp[_size] = item;
	_size++;
	delete[] _array;
	_array = temp;

	return *this;
}

Vector& Vector::push_front(int item)
{
	if (_size < _capacity)
	{
		for (size_t i = _size; i > 0; i--)
			_array[i] = _array[i - 1];

		_array[0] = item;
		_size++;
		return *this;
	}
	_capacity += 16;
	int* temp = new int[_capacity];
	for (size_t i = 0; i < _size; i++)
		temp[i + 1] = _array[i];
	temp[0] = item;
	_size++;
	delete[] _array;
	_array = temp;

	return *this;
}

void Vector::print() const
{
	for (size_t i = 0; i < _size; i++)
		cout << _array[i] << " ";
	cout << endl;
}

Vector& Vector::pop_back()
{
	if (_size != 0)
	{
		_size--;
		int* temp = new int[_capacity];
		for (size_t i = 0; i < _size; i++)
			temp[i] = _array[i];
		delete[] _array;
		_array = temp;
	}

	return *this;
}

Vector& Vector::pop_front()
{
	if (_size != 0)
	{
		_size--;
		int* temp = new int[_capacity];
		for (size_t i = 1; i <= _size; i++)
			temp[i - 1] = _array[i];
		delete[] _array;
		_array = temp;
	}

	return *this;
}

void Vector::delete_by_index(const size_t index)
{
	if (_size != 0)
	{
		_size--;
		int* temp = new int[_capacity];
		for (size_t i = 0; i < _size; i++)
			if (_array[i] != index)
				temp[i] = _array[i];
		delete[] _array;
		_array = temp;
	}
}

void Vector::insert_by_index(const size_t index, const int element)
{
	if (_size != 0)
	{
		int* temp = new int[_size];
		int Checker = 0;
		for (size_t i = 0; i < _size; i++)
		{
			if (i == index)
			{
				temp[Checker] = element;
				Checker++;
			}
			temp[Checker] = _array[i];
			Checker++;
		}

		delete[] _array;
		_array = temp;
		_size++;
	}
}

int& Vector::operator[](int index)
{
	if (index >= _size)
		assert(!"Index Error");
	return _array[index];
}

int& Vector::operator()(int index)
{
	if (index >= _size)
		assert(!"Index Error");
	return _array[index];
}

size_t Vector::find(const int element) {
	for (size_t i = 0; i < _size; i++) {
		if (_array[i] == element) {
			return i;
		}
	}
	return -1;
}

size_t Vector::rfind(const int element) {
	for (size_t i = _size - 1; i != -1; i--) {
		if (_array[i] == element) {
			return i;
		}
	}
	return -1;
}

void Vector::sort(bool reverse) {
	if (_size <= 1)
		assert(!"Not Reverseable!");

	if (!reverse) {
		for (size_t i = 0; i < _size - 1; i++) {
			for (size_t j = 0; j < _size - i - 1; j++) {
				if (_array[j] > _array[j + 1]) {
					int temp = _array[j];
					_array[j] = _array[j + 1];
					_array[j + 1] = temp;
				}
			}
		}
	}
	else {
		for (size_t i = 0; i < _size - 1; i++) {
			for (size_t j = 0; j < _size - i - 1; j++) {
				if (_array[j] < _array[j + 1]) {
					int temp = _array[j];
					_array[j] = _array[j + 1];
					_array[j + 1] = temp;
				}
			}
		}
	}
}