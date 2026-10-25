#include "fighter.hpp"

Fighter::Fighter(std::string n, float hp, float dmg)
  : name(n), health(hp), damage(dmg)
{}

void Fighter::info() const
{
    std::cout << name   << std::endl;
    std::cout << health << std::endl;
    std::cout << damage << std::endl;
}
