/**
 * Problem 2.3: Consider int val=0xCAFE. Write expressions using bitwise 
 * operations that do the following:
 *
 *  - Test if at least three of the last four bits (LSB) are on.
 *
 * Solution: The bits in the "0xCAFE" register look like:
 *
 *  1100 1010 1111 1110
 *
 * Clearly, three of the last four bits are on. Let's see if we can write
 * C code to demonstrate this.
 */

#include <stdio.h>
#include <math.h>

/**
 * Function takes an integer argument.
 *
 * Function returns an integer value, indicating the number of bits in the
 * least significant byte that are turned on. Valid return values will be
 * between 0 and 4.
 */
int least_significant_bits_on(int val) {
  int i, count = 0;
  for ( i = 0; i < 4; ++i )
    if ( (int)pow(2,i) & val )
      count++;
  return count;
}

/**
 * Function takes an integer argument.
 *
 * Function outputs to stdout a formatted answer, indicating the number of
 * bits in the least significant byte that are turned on.
 */
void run_test(int val) {
  int ans = least_significant_bits_on(val);
  printf("\n");
  if ( ans == 1 ) {
    printf("The number %d has 1 bit turned on in the least significant byte.\n",val);
  } else {
    printf("The number %d has %d bits turned on in the least significant byte.\n",val,ans);
  }
}

int main(void) {
  int val = 0xCAFE;

  /**
   * Run the test specified in the question.
   */
  run_test(val);

  /**
   * Run some additional unit tests.
   *
   * 16 -> 0, 15 -> 4, 0xF -> 4, 8 -> 1, 4-> 1, 2-> 1, 1-> 1,
   * 17 -> 1, 19 -> 2
   */
  run_test(16);  
  run_test(15);
  run_test(0xF);
  run_test(8);
  run_test(4);
  run_test(2);
  run_test(1);

  run_test(17);
  run_test(19);

  return 0;
}
