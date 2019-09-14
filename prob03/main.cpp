// Sales prediction

#include <iostream>

int main()
{

  int y2018 = 2103419277;
  int y2019 = y2018 * .18;

  //this will display 2018's Sales
  std::cout << "Last year's sales were $" << y2018 << std::endl;

  //this will display 2019's prediction
  std::cout << "This year's sales prediction: " <<y2019 << std::endl;
  return 0;
}
