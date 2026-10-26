#include "fighter.hpp"
#include "init.hpp"
#include <iostream>
#include <string>


int main()
{
  Fighter mouse = init();
  mouse.info();
  mouse.health -= 13;
  mouse.info();
  return 0;
}
