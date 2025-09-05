#include "script.h"
#include <stdio.h>
int main(void)
{
  //use the three func:
  int r3 = new_func_1(-1);
  fprintf(stdout, "Total: %d",r3);
  return 0;
}
