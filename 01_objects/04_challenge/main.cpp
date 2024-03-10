#include "project.hpp"
#include <iostream>

int main(){
    Person p1{"Yamada"};
    Person p2{"Hiroshi"};
    Person p3{"Dojo"};
    Team team;
    Project project{team};
    project.add_team_member(p1);
    project.add_team_member(p2);
    project.add_team_member(p3);
    project.print_team_members();
    return 0;
}