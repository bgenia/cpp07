#pragma once

#include <cstddef>

template <typename T>
class Array
{
public:
    Array();
    Array(const Array<T>& other);

    Array(std::size_t size);

    virtual ~Array();

    void swap(Array<T>& other);

    Array<T>& operator=(Array<T> other);

    T& operator[](std::size_t index);
    const T& operator[](std::size_t index) const;

    std::size_t size() const;

private:
    T* array;
    std::size_t size_;
};

#include <Array.tpp>
