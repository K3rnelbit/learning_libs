#include <stdio.h>
int func_one_v1(int x)
{
  fprintf(stdout, "<func_one_v1>");
  return x;
}
int func_two(int x)
{
  fprintf(stdout, "<func_two>");
  return x * 2;
}
int func_one_v2(int x, int y)
{
  fprintf(stdout, "<func_one_v2>");
  return x * y;
}
__asm__(".symver func_one_v1, func_one@LIB_1.0");

__asm__(".symver func_one_v2, func_one@@LIB_2.0");
