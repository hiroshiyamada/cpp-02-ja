#include <iostream>
#include <chrono>

template <typename T, typename U>
class Stack
{
public:
    void push(const U &value)
    {
        data.push_back(value);
    }

    U pop()
    {
        if (!data.empty())
        {
            U value = data.back();
            data.pop_back();
            return value;
        }
        else
        {
            std::cerr << "Error: Stack is empty.\n";
            exit(EXIT_FAILURE);
        }
    }

    std::chrono::microseconds calc_push_pop_time(){
        U input = 1;
        std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();
        for (int i = 0; i < 100000; ++i) {
            push(input); 
            U value = pop();
        }
        std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
        return std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    }

private:
    T data;
};