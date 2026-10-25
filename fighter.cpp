#include "fighter.hpp"
#include <string>

Fighter::Fighter(std::string n, float hp, float dmg)
  : name(n), health(hp), damage(dmg)
{}
