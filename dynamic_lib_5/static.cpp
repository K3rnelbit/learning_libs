#include <iostream>

static void print_one(void) noexcept
{
  std::cout << "print_one" << std::endl;
}
void using_static_func(void)
{
  print_one();
  std::cout << "done" << std::endl;
}
