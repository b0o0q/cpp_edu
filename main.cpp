#include "fighter.hpp"
#include "init.hpp"
#include <iostream>
#include <string>
#include <ctime>


int main()
{
  std::srand(std::time(nullptr));
  
  Fighter mouse = init();
  mouse.info();
  mouse.health -= 13;
  mouse.info();
  return 0;
}
