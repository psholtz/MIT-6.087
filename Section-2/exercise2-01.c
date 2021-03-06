/**
 * Problem 2.1: Determine the size, minimum and maximum value of the following
 * data types. Please specify if your machine is 32 bit or 64 bits in the answer.
 *
 * Solution: The sizes of the data types is given below:
 *
 *  byte:          1 -128 127
 *  unsigned char: 1 0 255
 *  short:         2 -32768 32767
 *  short:         2 0 65535
 *  int:           4 -2147483648 2147483647
 *  unsigned int:  4 0 4294967295
 *  unsigned long: 4 0 4294967295
 *  float:         4 1.75494e-38 3.402823e+38
 *  double:        8 2.225074e-308 1.797693e+308
 *
 * Machine has a 32-bit architecture.
 *
 * Importing the limits.h header file, we get the following values for these constants:
 *
 *  - LONG_MIN: -2147384648
 *  - LONG_MAX: 2147483647
 *  - ULONG_MAX: 4294967295
 *
 * These are the values that correspond to a 32-bit architecture.
 */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
  printf("char: \t\t%ld %d %d\n",sizeof(char),CHAR_MIN,CHAR_MAX);
  printf("unsigned char: \t%ld %d %d\n",sizeof(unsigned char),0,UCHAR_MAX);
  printf("short: \t\t%ld %d %d\n",sizeof(short),SHRT_MIN,SHRT_MAX);
  printf("unsigned short: %ld %d %d\n",sizeof(unsigned short),0,USHRT_MAX);
  printf("int: \t\t%ld %d %d\n",sizeof(int),INT_MIN,INT_MAX);
  printf("unsigned int: \t%ld %d %u\n",sizeof(unsigned int),0,UINT_MAX);
  printf("unsigned long: \t%ld %d %lu\n",sizeof(unsigned long),0,ULONG_MAX);
  printf("float: \t\t%ld %e %e\n",sizeof(float),FLT_MIN,FLT_MAX);
  printf("double: \t%ld %e %e\n",sizeof(double),DBL_MIN,DBL_MAX);

  printf("\n");

  printf("LONG_MIN: \t%ld\n",LONG_MIN);
  printf("LONG_MAX: \t%ld\n",LONG_MAX);
  printf("ULONG_MAX: \t%lu\n",ULONG_MAX);
  return 0;
}
