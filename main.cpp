#include "fighter.hpp"
#include <iostream>
#include <string>


int main()
{
  Fighter mouse("Kel", 25, 14.3);
  mouse.info();
  mouse.health -= 13;
  mouse.info();
  return 0;
}
