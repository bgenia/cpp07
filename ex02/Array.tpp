#include <stdexcept>

template <typename T>
Array<T>::Array()
    : array(NULL), size_(0) {}

template <typename T>
Array<T>::Array(const Array<T>& other)
    : array(new T[other.size_]), size_(other.size_)
{
    for (std::size_t i = 0; i < size_; i++)
        array[i] = other.array[i];
}

template <typename T>
Array<T>::Array(std::size_t size)
    : array(new T[size]), size_(size) {}

template <typename T>
Array<T>::~Array()
{
    delete[] array;
}

template <typename T>
void Array<T>::swap(Array<T>& other)
{
    T* tempArray = array;
    array = other.array;
    other.array = tempArray;
    std::size_t tempSize = size_;
    size_ = other.size_;
    other.size_ = tempSize;
}

template <typename T>
Array<T>& Array<T>::operator=(Array<T> other)
{
    swap(other);
    return *this;
}

template <typename T>
T& Array<T>::operator[](std::size_t index)
{
    if (index >= size_)
        throw std::out_of_range("array index out of range");

    return this->array[index];
}

template <typename T>
const T& Array<T>::operator[](std::size_t index) const
{
    if (index >= size_)
        throw std::out_of_range("array index out of range");

    return this->array[index];
}

template <typename T>
std::size_t Array<T>::size() const
{
    return size_;
}
