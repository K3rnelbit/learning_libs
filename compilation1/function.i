# 0 "function.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "function.c"
# 1 "function.h" 1
       
# 12 "function.h"
float add_and_multiply(float x, float y);
# 2 "function.c" 2
int nComplitionStatus = 0;
float add(float x, float y)
{ return x + y;

}


float add_and_multiply(float x, float y)
{
  float z = add(x,y);
  z *= (3.0);
  return z;
}
