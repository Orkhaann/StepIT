#pragma once
const int Maxsize = 10;
template<typename T>
class DeQueue {
    T* _items = new T[Maxsize];
    int _front;
    int _rear;
    int _size;
public:
    int getFront() const;
    int getRear() const;
    void insertfront(T key);
    void insertrear(T key);
    void deletefront();
    void deleterear();
    bool isFull();
    bool isEmpty();

    template<typename T>
    friend ostream& operator<<(ostream& os, DeQueue<T>& queue);
    ~DeQueue();
};

template<typename T>
int DeQueue<T>::getFront() const {
    if (isEmpty())
        assert(!"Queue Is Empty!");
    return _items[_front];
}

template<typename T>
int DeQueue<T>::getRear() const {
    if (isEmpty())
        assert(!"Queue Is Empty!");
    return _items[_rear];
}

template<typename T>
bool DeQueue<T>::isFull() {
    return ((_front == 0 && _rear == _size - 1) ||
        _front == _rear + 1);
}

template<typename T>
bool DeQueue<T>::isEmpty() {
    return (_front == -1);
}

template<typename T>
void DeQueue<T>::insertfront(T key)
{
    if (isFull())
        assert(!"Queue Is Full!");

    if (_front == -1) {
        _front = 0;
        _rear = 0;
    }
    else if (_front == 0)
        _front = Maxsize - 1;
    else
        _front = _front - 1;

    _items[_front] = key;
}

template<typename T>
void DeQueue<T>::insertrear(T key) {
    if (isFull())
        assert(!"Queue Is Full!");

    if (_front == -1) {
        _front = 0;
        _rear = 0;
    }

    else if (_rear == _size - 1)
        _rear = 0;

    else
        _rear = _rear + 1;

    _items[_rear] = key;
}

template<typename T>
void DeQueue<T>::deletefront() {
    if (isEmpty())
        assert(!"Queue Is Empty!");

    if (_front == _rear) {
        _front = -1;
        _rear = -1;
    }
    else if (_front == _size - 1)
        _front = 0;
    else
        _front = _front + 1;
}

template<typename T>
void DeQueue<T>::deleterear() {
    if (isEmpty())
        assert(!"Queue Is Empty!");

    if (_front == _rear) {
        _front = -1;
        _rear = -1;
    }
    else if (_rear == 0)
        _rear = _size - 1;
    else
        _rear = _rear - 1;
}
template<typename T>
DeQueue<T>::~DeQueue()
{
    if (this->_items != nullptr)
    {
        delete[] this->_items;
        this->_items = nullptr;
    }
}

template<typename T>
std::ostream& operator<<(std::ostream& os, DeQueue<T>& queue) {
    os << "[";
    int i;
    for (i = queue._front; i != queue._rear; i = (i + 1) % Maxsize) {
        os << queue._items[i];
        os << ",";
    }
    os << queue._items[i];
    os << "]";
    return os;
}