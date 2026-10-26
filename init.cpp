Fihgter init()
{
  std::string name;
  float health, full_health, damage;
  
  std::cout << "Enter name" << std::endl;
  std::cin >> name;

  return Fighter (name, 20, 20, 5);
}
