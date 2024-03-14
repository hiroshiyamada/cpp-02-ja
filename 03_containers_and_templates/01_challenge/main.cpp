#include "print.hpp"

#include <vector>
#include <list>

int main()
{
    std::vector<int> vec{1, 2, 3};
    print_elements(vec);
    std::list<float> float_list{1.5, 2.3, 3.2};
    print_elements(float_list);
    return 0;
}
