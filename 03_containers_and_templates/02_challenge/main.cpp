#include "stack.hpp"

int main(){
    Stack<int> intStack;
    intStack.push(2);
    intStack.push(3);
    std::cout << intStack.top() << std::endl;
    intStack.pop();
    std::cout << intStack.top() << std::endl;
    std::cout << intStack.is_empty() << std::endl;
    intStack.pop();
    std::cout << intStack.is_empty() << std::endl;
    return 0;
}