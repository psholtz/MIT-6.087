/**
 * Problem 2.5: Determine if the following statements have any errors.
 *
 * If so, highlight them and explain why.
 *
 * Solution: 
 * 
 *  int 2nd_value = 10;
 * 
 * This is an ERROR, since variables cannot start with a number.
 *
 *  alliszero = (x=1) && (y=0)
 * 
 * This is legal C syntax. Before this statement executes, the values of the variables are:
 *  
 *  x <= 0, y <= 0, alliszero <= 1
 *
 * After the statement executes, the values of the variables are:
 *
 *  x <= 1, y <= 0, alliszero <= 0
 * 
 *  y=++x+y;z=z-->x;
 * 
 * This is legal C syntax. Before the statement executes, the values of the variables are:
 *
 *  x <= 10, y <= 3, z <= 0
 *
 */
#include <stdio.h>

int main(void) {
  int x = 10, y = 3, z = 0;

  printf("%d %d %d\n",x,y,z);
  y=++x+y;
  printf("%d %d %d\n",x,y,z);
  z=z-->x;
  printf("%d %d %d\n",x,y,z);

  return 0;
}
