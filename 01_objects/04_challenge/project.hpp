#include "team.hpp"

class Project{
public:
    Project(Team team);
    void add_team_member(const Person& new_member);
    void print_team_members();
private:
    Team team;
};