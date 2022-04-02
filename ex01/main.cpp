#include <iostream>

#include <iter.hpp>

template<typename T>
static void printElement(T& element, std::size_t index)
{
    std::cout << "[" << index << "] = " << element << std::endl;
}

int main()
{
    int ints[] = {1, 2, 3, 4, 5};

    iter(ints, 5, printElement);

    std::string strings[] = {"Hello", "World", "Aboba"};

    iter(strings, 3, printElement);
}
