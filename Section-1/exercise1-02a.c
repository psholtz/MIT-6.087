/*

 The value of ans is 12.0
 */
#include <stdio.h>

#define squared(x) x*x

int main(void) {
  double ans = 18.0/squared(2+1);
  printf("%f",ans);
  return 0;
}