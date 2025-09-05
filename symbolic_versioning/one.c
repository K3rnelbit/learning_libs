#include <stdio.h>
int first_func(int x)
{
  fprintf(stdout, "lib: %s: ", __FUNCTION__);
  return ++x;
}
int second_func(int x)
{
  fprintf(stdout, "lib: %s: ", __FUNCTION__);
  return (x + 2);
}
int third_func(int x)
{
  fprintf(stdout, "lib: %s: ", __FUNCTION__);
  return (x + 3);
}
//I want to enable first,second func in the dynamic lib
int new_func_1(int x)
{
  fprintf(stdout, "lib: %s: ", __FUNCTION__);
  return ++x;
}
int new_func_2(int x)
{
  fprintf(stdout, "lib: %s: ", __FUNCTION__);
  return --x;
}
