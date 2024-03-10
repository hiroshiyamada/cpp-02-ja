#include "project.hpp"
#include <iostream>

Project::Project(Team team) : team(team) {}

void Project::add_team_member(const Person &new_member)
{
    team.add_member(new_member);
}

void Project::print_team_members()
{
    std::vector<Person> members = team.get_member();
    for (const auto &member : members)
    {
        std::cout << member.get_name() << std::endl;
    }
}