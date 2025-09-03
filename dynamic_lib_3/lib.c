#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h> //API for runtime libloading

#define PI (3.1415926593)
typedef double (*SINP)(double x);


int main(void)
{
  //try to load the lib:
  void *lib;
  lib = dlopen("libm.so.6", RTLD_LAZY);
  if(lib == NULL)
  {
    printf("%s", dlerror());
    return -1;
  }//the lib has been loaded, try to find the func:
  SINP sin_func = (SINP)dlsym(lib, "sin");
  if(sin_func == NULL)
  {
    printf("%s", dlerror());//could not find the right function
    dlclose(lib);
    lib = NULL;
    return -1;
  }
  //compute the result:
  double result = sin_func(PI/2);
  fprintf(stdout, "%.4f", result);
  dlclose(lib);
  lib = NULL;
  return 0;
}

