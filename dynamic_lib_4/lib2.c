#include "stdio.h"

static void local_func(void)
{
  fprintf(stdout, "<local func, lib2>");
}

void func_two(void)
{
  fprintf(stdout, "<func two, lib2>");

}
void duplicate_func(void)
{
  fprintf(stdout, "<duplicate fun, lib2>");
}
