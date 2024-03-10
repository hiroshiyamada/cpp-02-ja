#include "team.hpp"

Team::Team() {}

void Team::add_member(const Person& new_member){
    member.push_back(new_member);
}

std::vector<Person> Team::get_member() const{
    return member;
}