/**
 * Problem 2.3: Consider int val = 0xCAFE.
 * 
 * Write expressions using bitwise operators that do the following:
 *
 *  - rotate four bits (i.e., produce val = 0xECAF)
 *
 * Solution: The bits in the 0xCAFE register are:
 *
 *  1100 1010 1111 1110 (51966)
 * 
 * To shift these values by four bits, we will produce:
 *
 *  1110 1100 1010 1111 (60591)
 *
 */
#include <stdio.h>
#include <math.h>

#define BITS_IN_BYTE 8 

/**
 * Function takes two integer arguments:
 * 
 *  val - integer value to be bit-shifted to the right by 1 bit.
 *  byte - size of the integer arguments in bytes.
 *
 * Function returns an integer, which is the argument shifted right by 1 bit.
 * If the least significant bit is turned on, it is moved to the "front" of
 * the answer, cycling it around.
 *
 * Shifting the LSB to the "front" will increase the value of the answer, by 
 * an amount commensurate with the size of the integer we are working with.
 */
int shift_right(int val,int byte) {
  if ( val & 1 ) {
    return pow(2, BITS_IN_BYTE * byte - 1) + (val >> 1);
  } else {
    return val >> 1;
  }
}

/**
 * Function takes an integer argument.
 * 
 * Function returns an integer, which is the argument shifted right by 4 bits.
 * If the least significant bit is turned on, it is moved to the "front" of
 * the answer, cycling it around.
 *
 * Function presumes 2-byte integers, that is, shifting the LSB to the "front"
 * will increase the value of the ansewr by 2^15 = 32768.
 */
int rotate_four(int val) {
  int i;
  for ( i = 0; i < 4; ++i )
    val = shift_right(val,2);
  return val;
}

int main(void) {
  int val = 0xCAFE;

  printf("start: %d\n",val);
  printf("expected: %d\n",0xECAF);
  printf("answer: %d\n",rotate_four(val));
  printf("start: %d\n",val);

  return 0;
}
