#include "stack.hpp"

#include <vector>
#include <list>
#include <deque>

int main(){
    Stack<std::vector<int>, int> stack_vector;
    std::cout << "elapsed_time (vector): " << stack_vector.calc_push_pop_time().count() << std::endl;
    Stack<std::list<int>, int> stack_list;
    std::cout << "elapsed_time (list): " << stack_list.calc_push_pop_time().count() << std::endl;
    Stack<std::deque<int>, int> stack_deque;
    std::cout << "elapsed_time (deque): " << stack_deque.calc_push_pop_time().count() << std::endl;
    return 0;
}