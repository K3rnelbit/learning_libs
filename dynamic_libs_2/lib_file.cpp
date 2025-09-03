#include <iostream>

void __attribute__((visibility("hidden"))) call_me(void)
{
  std::cout << "The func has been called inside the " << __FILE__ << " file " << std::endl;
}
void call_me_two(void)
{
  std::cout << "The func call_me_two has been called in the " << __FILE__ << " file" << std::endl;
}
