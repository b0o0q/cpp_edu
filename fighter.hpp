#pragma once
#include <string>
#include <iostream>

class Fighter
{
public:
  std::string name;
  float health;
  float damage;

  Fighter(std::string n, float hp, float dmg);

  void info();
};
