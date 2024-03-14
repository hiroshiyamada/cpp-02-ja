#include <iostream>

template <typename T>
void print_elements(T elements)
{
    for (auto &element : elements)
    {
        std::cout << element << std::endl;
    }
}
