#include <iostream>

static void print_one(void)
{
  std::cout << "Printing " << std::endl;
}
void using_dynamic_func(void)
{
  print_one();
  std::cout << "Done";
}