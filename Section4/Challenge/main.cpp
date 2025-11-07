#include <iostream>

int main()
{
  int favorite_number;

  std::cout << "What's your favorite number?" << std::endl;
  std::cin >> favorite_number;
  std::cout << "Amazing, that's my favorite number, too!" << std::endl;
  std::cout << "No, really!! " << favorite_number << " is also my favorite number!" << std::endl;

  return 0;
}