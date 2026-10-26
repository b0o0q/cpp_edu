#include "fighter.hpp"

Fighter::Fighter(std::string n, float hp, float fhp, float dmg)
  : name(n), health(hp), full_health(fhp), damage(dmg)
{}

void Fighter::info() const
{
    std::cout << name   << std::endl;
    std::cout << health << "/" << full_health << std::endl;
    std::cout << damage << std::endl;
}
