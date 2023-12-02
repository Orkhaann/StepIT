#pragma once

const int maxSize = 10;

template<typename T>
class Stack
{
private:
	T arr[maxSize];
	int top;
public:
	Stack();
	void push(T);
	void pop();
	T peek();
	bool isEmpty();
	bool isFull();
	void print();

	friend ostream& operator<<(ostream& os, const Stack& stack)
	{
		for (int i = 0; i <= stack.top; i++)
		{
			os << stack.arr[i] << " ";
		}
		os << endl;
		return os;
	}
};

template<typename T>
Stack<T>::Stack()
{
	top = -1;
}

template<typename T>
void Stack<T>::push(T data)
{
	if (!isFull())
	{
		top++;
		arr[top] = data;
	}
	else
		cout << "Stack Full" << endl;
}

template<typename T>
void Stack<T>::pop()
{
	if (!isEmpty())
		top--;
	else
		cout << "Stack Empty" << endl;
}

template<typename T>
T Stack<T>::peek()
{
	if (!isEmpty())
		return arr[top];
	else
		cout << "Stack Empty" << endl;
}

template<typename T>
bool Stack<T>::isEmpty()
{
	return top == -1;
}

template<typename T>
bool Stack<T>::isFull()
{
	return top == maxSize - 1;
}

template<typename T>
void Stack<T>::print()
{
	for (int i = 0; i <= top; i++)
		cout << arr[i] << " ";
	cout << endl;
}