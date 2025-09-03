//---------------------------------------------------------------------------------------------------------------------
// c.c
//
// <Explanation of the program ...>
// <... May have multiple lines.>
//
//---------------------------------------------------------------------------------------------------------------------
//
#include "function.h"
//---------------------------------------------------------------------------------------------------------------------
///
/// This is an example header comment. Here, you explain, what the
/// function does. Copypaste and adapt it!
///
/// @param numbers an array to check
/// @param length The length of the array. If this text is too long you can
///
/// @return the highest number
//
extern int nCompletionStatus;
int main(void)
{
  float x = 1.0f;
  float y = 5.0F;
  float z;
  z = add_and_multiply(x,y);
  nCompletionStatus = 1;
  return 0;
}
