#pragma once

template<class T>
class Node2
{
public:
	T data;
	Node2* next;
	Node2* prev;
	Node2() :data(), next(), prev() {}
	Node2(T info) :data(info), next(), prev() {}
};

template<class T>
class DoubleLinkedList
{
private:
	Node2<T>* _head;
	Node2<T>* _tail;

public:
	DoubleLinkedList() : _head(), _tail() {}

	void pushFront(Node2<T>* item)
	{
		if (_head == NULL)
		{
			_head = item;
			_tail = item;
			return;
		}

		Node2<T>* temp = _head;
		_head = item;
		_head->next = temp;
		temp->prev = _head;
	}
	void pushFront(T item)
	{
		pushFront(new Node2<T>(item));
	}

	void pushBack(Node2<T>* item)
	{
		if (_head == NULL)
		{
			_head = item;
			_tail = item;
			return;
		}

		Node2<T>* temp = _tail;
		_tail = item;
		_tail->prev = temp;
		temp->next = _tail;
	}

	void pushBack(T item)
	{
		pushBack(new Node2<T>(item));
	}

	void insertBefore(T item, T newItem)
	{
		if (_head == NULL)
			assert(!"List Empty");

		Node2<T>* temp = _head;

		Node2<T>* newNode2 = new Node2<T>(newItem);
		while (temp->next != NULL)
		{
			if (temp->data == item)
			{
				Node2<T>* save = temp;
				Node2<T>* save_2 = temp->prev;

				save_2->next = newNode2;
				newNode2->prev = save_2;
				newNode2->next = save;
				save->prev = newNode2;
			}
			temp = temp->next;
		}
		if (temp->data == item)
		{
			Node2<T>* save = temp;
			Node2<T>* save_2 = temp->prev;

			save_2->next = newNode2;
			newNode2->next = save;
			newNode2->prev = save_2;
			save->prev = newNode2;
		}

		assert(!"Element Not Found");
	}


	void insertAfter(T item, T newItem)
	{
		if (_head == NULL)
			assert(!"List Empty");

		Node2<T>* temp = _head;

		Node2<T>* newNode2 = new Node2<T>(newItem);
		while (temp != NULL)
		{
			if (temp->data == item)
			{
				Node2<T>* save = temp->next;
				newNode2->prev = temp;
				newNode2->next = save;
				temp->next = newNode2;
				if (save != NULL)
					save->prev = newNode2;
				else
					_tail = newNode2;
				return;
			}
			temp = temp->next;
		}

		assert(!"Element Not Found");
	}
	
	void popFront()
	{
		if (_head == NULL)
			assert(!"NULL");
		if (_head == _tail)
		{
			delete  _head;
			_tail = NULL;
			_head = NULL;
			return;
		}

		_head = _head->next;
		delete _head->prev;
		_head->prev = NULL;
	}

	void popBack()
	{
		if (_head == NULL)
			assert(!"NULL");
		if (_head == _tail)
		{
			delete  _head;
			_tail = NULL;
			_head = NULL;
			return;
		}
		_tail = _tail->prev;
		delete _tail->next;
		_tail->next = NULL;
	}

	Node2<T>* search(T item)
	{
		Node2<T>* temp = _head;

		while (temp->next != NULL)
		{
			if (temp->data == item)
				return temp;

			temp = temp->next;
		}

		if (temp->data == item)
			return temp;


		return NULL;
	}

	void displayFront()
	{
		Node2<T>* temp = _head;

		cout << "[";
		while (temp->next != NULL)
		{
			cout << temp->data << ", ";
			temp = temp->next;
		}
		cout << temp->data << "]" << endl;
	}

	void displayBack()
	{
		Node2<T>* temp = _tail;

		cout << "[";
		while (temp->prev != NULL)
		{
			cout << temp->data << ", ";
			temp = temp->prev;
		}
		cout << temp->data << "]" << endl;
	}
};