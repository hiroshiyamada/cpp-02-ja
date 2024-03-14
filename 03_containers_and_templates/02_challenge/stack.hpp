#include <iostream>
#include <vector>

template <typename T>
class Stack
{
public:
    void push(const T &value)
    {
        data.push_back(value);
    }

    T pop()
    {
        if (!data.empty())
        {
            T value = data.back();
            data.pop_back();
            return value;
        }
        else
        {
            std::cerr << "Error: Stack is empty.\n";
            exit(EXIT_FAILURE);
        }
    }

    T top(){
        if (!data.empty())
        {
            return data.back();
        }
        else
        {
            std::cerr << "Error: Stack is empty.\n";
            exit(EXIT_FAILURE);
        }
    }

    bool is_empty() const
    {
        return data.empty();
    }

private:
    std::vector<T> data;
};