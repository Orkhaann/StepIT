#pragma once

template<class T>
class Node
{
public:
	T data;
	Node* next;
	Node() :data(), next() {}
	Node(T info) :data(info), next() {}
};

template<class T>
class SingleLinkedList
{
private:
	Node<T>* _head;
public:
	SingleLinkedList() :_head() {}
	void AddBegin(Node<T>& item);
	void AddBegin(Node<T>* item);
	void AddEnd(T item);
	void AddBegin(T& item);
	void AddBegin(T item);
	void AddEnd(Node<T>& item);
	void AddEnd(T& item);
	void AddBefore(const Node<T>* _item, T item);
	void AddBefore(const Node<T>* _item, Node<T>* item);
	void AddAfter(const Node<T>* _item, T item);
	void AddAfter(const Node<T>* _item, Node<T>* item);
	void DeleteBegin();
	void DeleteEnd();
	void DeleteByValue(const T& item);
	Node<T>& SearchValue(const Node<T>& item);
	Node<T>& SearchValue(const T& item);
	void display();
};

template<class T>
void SingleLinkedList<T>::AddBegin(Node<T>& item)
{
	Node<T>* new_node = new Node<T>(item.data);
	if (this->_head == nullptr)
	{
		this->_head = new_node;
		return;
	}
	new_node->next = this->_head;
	this->_head = new_node;
}

template<class T>
void SingleLinkedList<T>::AddBegin(Node<T>* item)
{
	if (this->_head == nullptr)
	{
		this->_head = item;
		return;
	}
	Node<T>* temp = this->_head;
	this->_head = item;
	this->_head->next = temp;
}

template<class T>
void SingleLinkedList<T>::AddEnd(T item)
{
	Node<T>* newNode = new Node<T>(item);
	if (this->_head == nullptr)
	{
		this->_head = newNode;
		return;
	}
	Node<T>* list = this->_head;
	while (list->next != nullptr)
		list = list->next;
	list->next = newNode;
}

template<class T>
void SingleLinkedList<T>::AddBegin(T& item)
{
	Node<T>* new_node = new Node<T>(item);
	if (this->_head == nullptr)
	{
		this->_head = new_node;
		return;
	}
	new_node->next = this->_head;
	this->_head = new_node;
}

template<class T>
void SingleLinkedList<T>::AddBegin(T item)
{
	Node<T>* new_node = new Node<T>(item);
	if (this->_head == nullptr)
	{
		this->_head = new_node;
		return;
	}
	new_node->next = this->_head;
	this->_head = new_node;
}

template<class T>
void SingleLinkedList<T>::AddEnd(Node<T>& item)
{
	Node<T>* new_node = new Node<T>(item.data);
	if (this->_head == nullptr)
	{
		this->_head = new_node;
		return;
	}
	Node<T>* temp = this->_head;
	while (temp->next != nullptr)
		temp = temp->next;
	temp->next = new_node;
}

template<class T>
void SingleLinkedList<T>::AddEnd(T& item)
{
	Node<T>* new_node = new Node<T>(item);
	if (this->_head == nullptr)
	{
		this->_head = new_node;
		return;
	}
	Node<T>* temp = this->_head;
	while (temp->next != nullptr)
		temp = temp->next;
	temp->next = new_node;
}

template<class T>
void SingleLinkedList<T>::AddBefore(const Node<T>* _item, T item)
{
	if (this->_head == nullptr)
		assert(!"NULL");
	Node<T>* new_node = new Node<T>(item);
	bool check = true;
	if (this->_head->data == _item->data)
	{
		new_node->next = this->_head;
		this->_head = new_node;
		return;
	}
	Node<T>* temp = this->_head;
	while (temp->next != nullptr)
	{
		if (temp->next->data == _item->data)
		{
			check = false;
			break;
		}
		temp = temp->next;
	}
	if (check)
		assert(!"Not Found");
	Node<T>* save = temp->next;
	temp->next = new_node;
	new_node->next = save;
}

template<class T>
void SingleLinkedList<T>::AddBefore(const Node<T>* _item, Node<T>* item)
{
	if (this->_head == nullptr)
		assert(!"NULL");
	bool check = true;
	if (this->_head->data == _item->data)
	{
		item->next = this->_head;
		this->_head = item;
		return;
	}
	Node<T>* temp = this->_head;
	while (temp != nullptr)
	{
		if (temp->next->data == _item->data)
		{
			check = false;
			break;
		}
		temp = temp->next;
	}
	if (check)
		assert(!"Not Found");
	Node<T>* save = temp->next;
	temp->next = item;
	item->next = save;
}

template<class T>
void SingleLinkedList<T>::AddAfter(const Node<T>* _item, T item)
{
	if (this->_head == nullptr)
		assert(!"NULL");
	bool check = true;
	Node<T>* new_node = new Node<T>(item);
	Node<T>* temp = this->_head;
	while (temp->next != nullptr)
	{
		if (temp->data == _item->data)
		{
			check = false;
			break;
		}
		temp = temp->next;
	}
	if (check == true)
		assert(!"Not Found");
	Node<T>* save = temp->next;
	temp->next = new_node;
	new_node->next = save;
}

template<class T>
void SingleLinkedList<T>::AddAfter(const Node<T>* _item, Node<T>* item)
{
	if (this->_head == nullptr)
		assert(!"NULL");
	bool check = true;
	Node<T>* temp = this->_head;
	while (temp->next != nullptr)
	{
		if (temp->data == _item->data)
		{
			check = false;
			break;
		}
		temp = temp->next;
	}
	if (check == true)
		assert(!"Not Found");
	Node<T>* save = temp->next;
	temp->next = item;
	item->next = save;
}

template<class T>
void SingleLinkedList<T>::DeleteBegin()
{
	if (this->_head == nullptr)
		assert(!"NULL");
	Node<T>* temp = this->_head;
	this->_head = this->_head->next;
	delete temp;
	temp = NULL;
}

template<class T>
void SingleLinkedList<T>::DeleteEnd()
{
	if (this->_head == nullptr)
		assert(!"NULL");
	else if (this->_head->next == nullptr)
	{
		delete _head;
		_head = nullptr;
	}
	else
	{
		Node<T>* current = this->_head;
		while (current->next->next != nullptr)
			current = current->next;
		Node<T>* temp = current->next;
		current->next = nullptr;
		delete temp;
	}
}

template<class T>
void SingleLinkedList<T>::DeleteByValue(const T& item)
{
	bool check = true;
	Node<T>* temp = this->_head;
	while (temp->next != nullptr)
	{
		if (temp->data == item)
		{
			check = false;
			break;
		}
		temp = temp->next;
	}
	if (check)
		assert(!"Not Found");
	Node<T>* temp_2 = this->_head;
	while (temp_2->next != temp)
		temp_2 = temp_2->next;
	Node<T>* save = temp->next;
	delete temp;
	temp_2->next = save;
}

template<class T>
Node<T>& SingleLinkedList<T>::SearchValue(const Node<T>& item)
{
	Node<T>* temp = this->_head;
	while (temp->next != nullptr)
	{
		if (temp->data == item.data)
			return *temp;
		temp = temp->next;
	}
	assert(!"Not Found");
}

template<class T>
Node<T>& SingleLinkedList<T>::SearchValue(const T& item)
{
	Node<T>* temp = this->_head;
	while (temp->next != nullptr)
	{
		if (temp->data == item.data)
			return *temp;
		temp = temp->next;
	}
	assert(!"Not Found");
}

template<class T>
void SingleLinkedList<T>::display()
{
	Node<T>* temp = this->_head;
	cout << "[";
	while (temp->next != nullptr)
	{
		cout << temp->data << ", ";
		temp = temp->next;
	}
	cout << temp->data << "]" << endl;
}