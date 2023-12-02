#pragma once
const int maxsize = 10;

template<class T>
class Queue
{
	T* items = new T[maxsize];
	int front = -1;
	int rear = -1;

public:

	bool isFull();
	bool isEmpty();

	void enQueue(T new_item);
	void dQueue();

	inline int getFront() const { return this->front; }
	inline int getRear() const { return this->rear; }

	template<class T>
	friend ostream& operator<<(ostream& os, const Queue<T>& queue);

	friend class Printer;
};

template<class T>
bool Queue<T>::isFull()
{
	return (this->rear == maxsize - 1);
}

template<class T>
bool Queue<T>::isEmpty()
{
	return(this->front == -1);
}

template<class T>
void Queue<T>::enQueue(T new_item)
{
	if (this->isFull())
		assert(!"Queue is FULL");
	if (this->front == -1)
		this->front = 0;
	this->rear++;
	this->items[this->rear] = new_item;
}

template<class T>
void Queue<T>::dQueue()
{
	if (this->isEmpty())
		assert(!"Queue is Empty");
	if (this->front == this->rear)
	{
		this->front = -1;
		this->rear = -1;
	}
	else
		this->front++;
}

template<class T>
ostream& operator<<(ostream& os, const Queue<T>& queue)
{
	os << "[";
	for (size_t i = queue.front; i < queue.rear + 1; i++)
	{
		os << queue.items[i];
		if (i == queue.rear)
			break;
		os << ",";
	}
	os << "]";

	return os;
}