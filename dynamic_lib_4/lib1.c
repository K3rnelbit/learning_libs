#include "stdio.h"

static void local_func(void)
{
  fprintf(stdout,"<local func>");
}
void func_one(void) //func will be exported
{
  fprintf(stdout,"<func one>");
}


void duplicate_func(void)
{
  fprintf(stdout,"<duplicate called in lib1");
}
