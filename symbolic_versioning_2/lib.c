#include <stdio.h>

int first_func_v1(int x)
{
  fprintf(stdout, "%s", __FUNCTION__);
return x;
}
int second_func(int x)
{
  fprintf(stdout, "%s", __FUNCTION__);
  return ++x;
}
int third_func(int x)
{
  fprintf(stdout, "%s", __FUNCTION__);
  return (x + 2);
}
int func_four(int x)
{
  fprintf(stdout, "%s", __FUNCTION__);
  return (x + 5);
}
int func_five(int x)
{
  fprintf(stdout, "%s", __FUNCTION__);
  return x << 2;
}
int first_func_v2(int x)
{
  fprintf(stdout, "Version 2 of the first func\n");
  return x ^ 4;
}
int first_func_v3(int x, int negative)
{
  if(negative)
    return x;
  return -x;
}
//Export refs resolving:
__asm__(".symver first_func_v1, first_func@LIB_1.0");
__asm__(".symver first_func_v2, first_func@LIB_2.0");
__asm__(".symver first_func_v3, first_func@@LIB_3.0");

