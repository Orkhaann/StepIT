#pragma once

class myString {
private:
	size_t _length = 0;
	size_t _capacity = 16;
	char* _text = nullptr;
	void setText(const char* text);
public:
	myString();
	myString(const char* text);
	myString(const size_t count, const char text);
	myString(const myString& other);
	myString& operator=(const myString& other)
	{
		this->setText(other._text);
		return *this;
	}

	char& front();
	char& back();
	char& at(size_t index);
	size_t capacity() const { return _capacity - 1; };
	size_t size() const { return _length; };
	size_t find(char chr) const;
	size_t rfind(char chr) const;
	void clear();
	void resize(size_t newSize, char c);
	void reserve(size_t newCapacity);
	void shrink_to_fit();
	bool empty() const { return _length == 0; };
	myString& append(const char* text); // "a".append("b") => "ab"
	int compare(const myString& right); // -1, 0, 1
	const char* print() const { return _text; }

	///////////////////////////////////////////////////////////////////////////////////////

	bool isalnum();
	bool isalpha();
	bool isdigit();
	bool islower();
	bool isupper();
	bool isspace();
	bool isdecimal();
	bool isasciiV2();
	bool isidentifier();
	bool iscapitalize();
	int len();
	int count(char c);
	bool startsWith(const char* prefix);
	bool endWith(const char* suffix);
	void removeprefix(const char* prefix);
	void removesuffix(const char* suffix);




	~myString();
};

void myString::setText(const char* text)
{
	int len = strlen(text);
	this->_length = len;
	if (len >= 1)
	{
		if (this->_text != nullptr)
			delete[] this->_text;

		while (this->_capacity <= len)
			this->_capacity += 16;
		this->_text = new char[_capacity];
		strcpy_s(this->_text, this->_capacity - 1, text);
		this->_text[this->_capacity - 1] = '\0';
	}
	else
		assert(!"Text is NULL");
}

myString::myString()
{
	_length = 0;
	_capacity = 16;
	_text = nullptr;
}

myString::myString(const char* text)
{
	setText(text);
}

myString::myString(const myString& other)
{
	setText(other._text);
}

myString::myString(const size_t count, const char text)
{
	while (_capacity <= count)
		_capacity += 16;
	_text = new char[_capacity];
	for (size_t i = 0; i < count; i++)
		_text[i] = text;
	_text[count] = '\0';
	_length = count;
}

myString::~myString()
{
	if (_text != nullptr)
		delete[] _text;
}

char& myString::front()
{
	if (this->_length >= 1)
		return _text[0];
	else
		assert(!"Text is NULL");
}

char& myString::back()
{
	if (this->_length >= 1)
		return _text[_length - 1];
	else
		assert(!"Text is NULL");
}

char& myString::at(size_t index)
{
	if (this->_length > index)
		return this->_text[index];
	else
		assert(!"Index is out of range");
}

size_t myString::find(char chr) const
{
	if (this->_length >= 1)
	{
		for (size_t i = 0; i < _length; i++)
		{
			if (_text[i] == chr)
				return i;
		}
	}
	return -1;
}

size_t myString::rfind(char chr) const
{
	if (this->_length >= 1)
	{
		for (int i = _length - 1; i >= 0; i--)
		{
			if (_text[i] == chr)
				return i;
		}
	}
	return -1;
}

void myString::clear()
{
	delete[] _text;
	_length = 0;
	_text = nullptr;
}

void myString::resize(size_t newSize, char c)
{
	if (_length >= newSize)
	{
		_length = newSize;
		_text[_length] = '\0';
	}
	else
	{
		size_t newCapacity = newSize + 1;
		char* newText = new char[newCapacity];
		for (size_t i = 0; i < _length; i++)
			newText[i] = _text[i];
		for (size_t i = _length; i < newSize; i++)
			newText[i] = c;

		newText[newSize] = '\0';

		delete[] _text;
		_text = newText;
		_length = newSize;
		_capacity = newCapacity;
	}
}

void myString::reserve(size_t newCapacity)
{
	if (newCapacity > _capacity)
	{
		char* newText = new char[newCapacity];
		strcpy_s(newText, newCapacity, _text);
		delete[] _text;
		_text = newText;
		_capacity = newCapacity;
	}
}

void myString::shrink_to_fit()
{
	if (this->_length < _capacity)
	{
		char* newText = new char[_length + 1];
		for (size_t i = 0; i < _length; i++)
			newText[i] = _text[i];
		newText[_length] = '\0';

		delete[] _text;
		_text = newText;
		_capacity = _length + 1;
	}
}

myString& myString::append(const char* text)
{
	size_t textLength = strlen(text);
	size_t newLength = _length + textLength;

	if (newLength >= _capacity)
	{
		size_t newCapacity = _capacity;
		while (newCapacity <= newLength)
			newCapacity += 16;

		char* newText = new char[newCapacity];
		for (size_t i = 0; i < _length; i++)
			newText[i] = _text[i];

		delete[] _text;
		_text = newText;
		_capacity = newCapacity;
	}

	for (size_t i = 0; i < textLength; i++)
		_text[_length + i] = text[i];

	_length = newLength;
	_text[_length] = '\0';

	return *this;
}

int myString::compare(const myString& right)
{
	size_t LefttextLength = strlen(_text);
	size_t RightTextLength = strlen(right._text);
	if (this->_length < this->_capacity)
	{
		if (LefttextLength == RightTextLength)
		{
			return 0;
		}
		else if (LefttextLength > RightTextLength)
		{
			return -1;
		}
		else if (LefttextLength < RightTextLength)
		{
			return 1;
		}
	}
}

bool myString::isalnum()
{
	for (size_t i = 0; i < this->_length; i++)
	{
		if (!((65 <= int(_text[i]) && int(_text[i]) <= 90) || (97 <= int(_text[i]) && int(_text[i]) <= 122)) && (48 <= int(_text[i]) && int(_text[i]) <= 57))
			return false;
	}
	return true;
}

bool myString::isalpha()
{
	for (size_t i = 0; i < this->_length; i++)
	{
		if (!((65 <= int(_text[i]) && int(_text[i]) <= 90) || (97 <= int(_text[i]) && int(_text[i]) <= 122)))
			return false;
	}
	return true;
}

bool myString::isdigit()
{
	for (size_t i = 0; i < this->_length; i++)
	{
		if (!((48 <= int(_text[i]) && int(_text[i]) <= 57)))
			return false;
	}
	return true;
}

bool myString::islower()
{
	for (size_t i = 0; i < this->_length; i++)
	{
		if (!(97 <= int(_text[i]) && int(_text[i]) <= 122))
			return false;
	}
	return true;
}

bool myString::isupper()
{
	for (size_t i = 0; i < this->_length; i++)
	{
		if (!(65 <= int(_text[i]) && int(_text[i]) <= 90))
			return false;
	}
	return true;
}

bool myString::isspace()
{
	for (size_t i = 0; i < this->_length; i++)
	{
		if (!(32 == int(_text[i])))
			return false;
	}
	return true;
}

bool myString::isdecimal()
{
	for (size_t i = 0; i < this->_length; i++)
	{
		if (_text[i] == '.')
			return false;
	}
	return true;
}

bool myString::isasciiV2()
{
	for (size_t i = 0; i < this->_length; i++)
	{
		if (!((0 <= int(_text[i]) && int(_text[i]) <= 155)))
			return false;
	}
	return true;
}

bool myString::isidentifier()
{
	for (size_t i = 0; i < this->_length; i++)
	{
		if (!((33 <= int(_text[0]) && int(_text[0]) <= 64)))
			return true;
	}
	return false;
}

bool myString::iscapitalize()
{
	for (size_t i = 0; i < this->_length; i++)
	{
		if (!((65 <= int(_text[0]) && int(_text[0]) <= 90)))
			return true;
	}
	return false;
}


int myString::len()
{
	size_t len = 0;
	for (size_t i = 0; i < _length; i++)
		len++;
	return len;
}

int myString::count(char c)
{
	size_t count = 0;
	for (size_t i = 0; i < _length; i++)
		if (_text[i] == c)
			count++;
	return count;
}

bool myString::startsWith(const char* prefix)
{
	size_t prefixLength = strlen(prefix);
	if (_length < prefixLength)
		return false;

	for (size_t i = 0; i < prefixLength; i++)
		if (_text[i] != prefix[i])
			return false;

	return true;
}

bool myString::endWith(const char* suffix)
{
	size_t suffixLength = strlen(suffix);
	if (_length < suffixLength)
		return false;

	for (size_t i = 0; i < suffixLength; i++)
		if (_text[_length - suffixLength + i] != suffix[i])
			return false;

	return true;
}


void myString::removeprefix(const char* prefix)
{
	size_t prefixLength = strlen(prefix);
	size_t extraLength = _length - prefixLength;
	if (_length < prefixLength)
		assert(!"Prefix Bigger Than Length");

	char* newtext = new char[extraLength + 1];
	for (size_t i = 0; i < extraLength; i++)
		newtext[i] = _text[i + prefixLength];
	newtext[extraLength] = '\0';

	delete[] _text;
	_text = newtext;
	_length = extraLength;
}

void myString::removesuffix(const char* suffix)
{
	size_t suffixLength = strlen(suffix);
	size_t extraLength = _length - suffixLength;
	if (_length < suffixLength)
		assert(!"Suffix Bigger Than Length");

	char* newtext = new char[extraLength + 1];
	for (size_t i = 0; i < extraLength; i++)
		newtext[i] = _text[i];
	newtext[extraLength] = '\0';

	delete[] _text;
	_text = newtext;
	_length = extraLength;
}