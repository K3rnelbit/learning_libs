#include "script.h"
#include <stdio.h>
int main(void)
{
  int n_first_func = first_func(1);
  int n_second_func = second_func(2);
  int n_val = n_first_func + n_second_func;
  printf("first(1) + second(2) = %d\n", n_val);
  return n_val;
}
