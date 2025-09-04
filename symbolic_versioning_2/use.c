#include "header.h"
#include <stdio.h>

int main(void)
{
  int r = first_func(1);
  int r2 = second_func(2);
  fprintf(stdout,"total: %d", r + r2);
  r = third_func(34);
  fprintf(stdout, "%d", r);
  return 0;
}
