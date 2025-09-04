#include "header.h"
#include "stdio.h"
int main(void)
{
  int r1 = first_func(1),
  r2 = second_func(2),
  r3 = third_func(3),
  r4 = func_five(4);
  printf("%d\n", r1 + r2 + r3 + r4);
  return 0;
}
