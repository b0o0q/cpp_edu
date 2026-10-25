#pragma once
#include <string>

class Fighter
{
public:
  std::string name;
  float health;
  float damage;

  Fighter(std::string n, float hp, float dmg);
};
