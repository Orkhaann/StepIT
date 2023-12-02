#pragma once

template <typename T>
class shared_ptrr
{
private:
    T* _ptr;
    int* count;

public:
    shared_ptrr() : _ptr(nullptr), count(new int(0)) {}

    explicit shared_ptrr(T* ptr) : _ptr(ptr), count(new int(1)) {}

    shared_ptrr(const shared_ptrr& other) : _ptr(other._ptr), count(other.count)
    {
        (*count)++;
    }

    T* get() const { return _ptr; }
    int* getCount() const { return count; }

    T& operator*()
    {
        return *_ptr;
    }

    void reset() noexcept
    {
        if (*count == 1)
        {
            delete _ptr;
            _ptr = nullptr;
        }
        (*count)--;
    }

    T* release() noexcept
    {
        T* temp = _ptr;
        _ptr = nullptr;
        return temp;
    }

    void swap(shared_ptrr& other) noexcept
    {
        swap(_ptr, other._ptr);
        swap(count, other.count);
    }

    ~shared_ptrr()
    {
        reset();
        if (*count == 0)
        {
            delete count;
        }
    }
};

template <typename T>
ostream& operator<<(ostream& os, shared_ptrr<T>& ptr)
{
    os << "Ptr: " << ptr.get();
    return os;
}
