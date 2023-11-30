#pragma once

template <typename PairTKey, typename PairTValue>
class KeyValuePair {
public:
    PairTKey key;
    PairTValue value;
    KeyValuePair() : key(), value() {}
    KeyValuePair(const PairTKey key, const PairTValue value)
        : key(key), value(value) {}
    PairTValue& operator[](PairTKey key) { return value; }
};

template <typename TKey, typename TValue>
class Dictionary {
public:
    Dictionary() {
        _pairs = new KeyValuePair<TKey, TValue>[_capacity];
    }

    TValue& item(const TKey key) {
        for (size_t i = 0; i < _count; i++) {
            if (_pairs[i].key == key) {
                return _pairs[i].value;
            }
        }
        assert(!"Key Not Found.");
    }

    TValue& operator[](const TKey key) {
        for (size_t i = 0; i < _count; i++) {
            if (_pairs[i].key == key) {
                return _pairs[i].value;
            }
        }
        assert(!"Key Not Found.");
    }

    void add(const KeyValuePair<TKey, TValue> pair) {
        if (_count == _capacity) {
            _capacity *= 2;
            KeyValuePair<TKey, TValue>* newPairs = new KeyValuePair<TKey, TValue>[_capacity];
            for (size_t i = 0; i < _count; i++) {
                newPairs[i] = _pairs[i];
            }
            delete[] _pairs;
            _pairs = newPairs;
        }
        _pairs[_count++] = pair;
    }

    inline size_t count() const { return _count;}

    inline size_t capacity() const { return _capacity;}

    TKey* keys() {
        TKey* keyArray = new TKey[_count];
        for (size_t i = 0; i < _count; i++) {
            keyArray[i] = _pairs[i].key;
        }
        return keyArray;
    }

    TValue* values() {
        TValue* valueArray = new TValue[_count];
        for (size_t i = 0; i < _count; i++) {
            valueArray[i] = _pairs[i].value;
        }
        return valueArray;
    }

    KeyValuePair<TKey, TValue>* items() {
        KeyValuePair<TKey, TValue>* itemArray = new KeyValuePair<TKey, TValue>[_count];
        for (size_t i = 0; i < _count; i++) {
            itemArray[i] = _pairs[i];
        }
        return itemArray;
    }

    void clear() {
        delete[] _pairs;
        _pairs = nullptr;
        _count = 0;
        _capacity = 5;
    }

    bool containsKey(const TKey key) const {
        for (size_t i = 0; i < _count; i++) {
            if (_pairs[i].key == key) {
                return true;
            }
        }
        return false;
    }

    bool containsValue(const TValue value) const {
        for (size_t i = 0; i < _count; i++) {
            if (_pairs[i].value == value) {
                return true;
            }
        }
        return false;
    }

    bool remove(const TKey key) {
        for (size_t i = 0; i < _count; i++) {
            if (_pairs[i].key == key) {
                for (size_t j = i; j < _count - 1; j++) {
                    _pairs[j] = _pairs[j + 1];
                }
                _count--;
                return true;
            }
        }
        return false;
    }

private:
    KeyValuePair<TKey, TValue>* _pairs = nullptr;
    size_t _count = 0;
    size_t _capacity = 5;
};