#pragma once

#include <cstddef>

template<typename T>
void iter(T* address, std::size_t length, void (*consumer)(T& e, std::size_t i))
{
    for (std::size_t i = 0; i < length; i++)
        consumer(address[i], i);
}
