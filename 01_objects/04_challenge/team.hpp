#include "person.hpp"
#include <vector>

class Team
{
public:
    Team();
    void add_member(const Person &new_member);
    std::vector<Person> get_member() const;

private:
    std::vector<Person> member;
};