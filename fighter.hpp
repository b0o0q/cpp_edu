#pragma once
#include <string>
#include <iostream>

class Fighter
{
public:
  std::string name;
  float health;
  float full_health;
  float damage;

  Fighter(std::string n, float hp, float fhp, float dmg);

  void info() const;
};
