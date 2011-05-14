/*

 The preprocessor will evaluate the expression as follows:
  
  18.0/squared(2+1)
  18.0/(2+1)*(2+1)
  18.0/3*3
  18.0

 The value of ans is 18.0.
 */
#include <stdio.h>

#define squared(x) (x)*(x)

int main(void) {
  double ans = 18.0/squared(2+1);
  printf("%f",ans);
  return 0;
}
