#pragma once

template <typename T>
class Vector {
private:
	T* _array = nullptr;
	size_t _size = 0;
	size_t _capacity = 16;

public:
	Vector() = default;
	Vector(size_t capacity);

	T* getData() const { return _array; }
	size_t size() const { return _size; }
	size_t capacity() const { return _capacity; }

	Vector& push_back(const T& item);
	Vector& push_front(const T& item);
	void print() const;

	T& operator[](int index);
	T& operator()(int index);

	Vector& pop_back();
	Vector& pop_front();

	void delete_by_index(const size_t index);
	void insert_by_index(const size_t index, const T& element);

	size_t find(const T& element);
	size_t rfind(const T& element);
	void sort(bool reverse);

	Vector& operator+(const Vector& Other);
	bool operator==(const Vector& Other);
	bool operator!=(const Vector& Other);
	Vector& operator++();
	Vector& operator--();
};

template <typename T>
Vector<T>::Vector(size_t capacity)
{
	while (_capacity <= capacity)
		_capacity += 16;
	_array = new T[_capacity]{};
}

template <typename T>
Vector<T>& Vector<T>::push_back(const T& item)
{
	if (_size < _capacity)
	{
		_array[_size] = item;
		_size++;
		return *this;
	}

	_capacity += 16;
	T* temp = new T[_capacity];
	for (size_t i = 0; i < _size; i++)
		temp[i] = _array[i];

	temp[_size] = item;
	_size++;
	delete[] _array;
	_array = temp;

	return *this;
}

template <typename T>
Vector<T>& Vector<T>::push_front(const T& item)
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
	T* temp = new T[_capacity];
	for (size_t i = 0; i < _size; i++)
		temp[i + 1] = _array[i];
	temp[0] = item;
	_size++;
	delete[] _array;
	_array = temp;

	return *this;
}

template <typename T>
void Vector<T>::print() const
{
	for (size_t i = 0; i < _size; i++)
		cout << _array[i] << " ";
	cout << endl;
}

template <typename T>
T& Vector<T>::operator[](int index)
{
	if (index >= _size)
		assert(!"Index Error");
	return _array[index];
}

template <typename T>
T& Vector<T>::operator()(int index)
{
	if (index >= _size)
		assert(!"Index Error");
	return _array[index];
}

template <typename T>
Vector<T>& Vector<T>::pop_back()
{
	if (_size != 0)
	{
		_size--;
		T* temp = new T[_capacity];
		for (size_t i = 0; i < _size; i++)
			temp[i] = _array[i];
		delete[] _array;
		_array = temp;
	}

	return *this;
}

template <typename T>
Vector<T>& Vector<T>::pop_front()
{
	if (_size != 0)
	{
		_size--;
		T* temp = new T[_capacity];
		for (size_t i = 1; i <= _size; i++)
			temp[i - 1] = _array[i];
		delete[] _array;
		_array = temp;
	}

	return *this;
}

template <typename T>
void Vector<T>::delete_by_index(const size_t index)
{
	if (_size != 0)
	{
		_size--;
		T* temp = new T[_capacity];
		for (size_t i = 0; i < _size; i++)
			if (i != index)
				temp[i] = _array[i];
		delete[] _array;
		_array = temp;
	}
}

template <typename T>
void Vector<T>::insert_by_index(const size_t index, const T& element)
{
	if (_size != 0)
	{
		T* temp = new T[_size];
		size_t Checker = 0;
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

template <typename T>
size_t Vector<T>::find(const T& element)
{
	for (size_t i = 0; i < _size; i++) {
		if (_array[i] == element) {
			return i;
		}
	}
	return -1;
}

template <typename T>
size_t Vector<T>::rfind(const T& element)
{
	for (size_t i = _size - 1; i != -1; i--) {
		if (_array[i] == element) {
			return i;
		}
	}
	return -1;
}

template <typename T>
void Vector<T>::sort(bool reverse)
{
	if (_size <= 1)
		assert(!"Not Reversible!");

	if (!reverse) {
		for (size_t i = 0; i < _size - 1; i++) {
			for (size_t j = 0; j < _size - i - 1; j++) {
				if (_array[j] > _array[j + 1]) {
					T temp = _array[j];
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
					T temp = _array[j];
					_array[j] = _array[j + 1];
					_array[j + 1] = temp;
				}
			}
		}
	}
}

template <typename T>
Vector<T>& Vector<T>::operator+(const Vector<T>& Other)
{
	Vector<T> newVect;

	for (size_t i = 0; i < Other._size; ++i)
		newVect._array[i] = _array[i] + Other._array[i];

	return newVect;
}

template <typename T>
bool Vector<T>::operator==(const Vector<T>& Other)
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

template <typename T>
bool Vector<T>::operator!=(const Vector<T>& Other)
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

template <typename T>
Vector<T>& Vector<T>::operator++()
{
	for (size_t i = 0; i < _size; i++)
		_array[i]++;

	return *this;
}

template <typename T>
Vector<T>& Vector<T>::operator--()
{
	for (size_t i = 0; i < _size; i++)
		_array[i]--;

	return *this;
}