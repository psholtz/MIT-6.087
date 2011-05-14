/*

  byte:          1
  unsigned char: 1
  short:         2
  int:           4
  unsigned int:  4
  unsigned long: 4
  float:         4
  double:        8
 */
#include <stdio.h>

int main(void) {
  printf("byte: \t\t%ld\n",sizeof(char));
  printf("unsigned char: \t%ld\n",sizeof(unsigned char));
  printf("short: \t\t%ld\n",sizeof(short));
  printf("int: \t\t%ld\n",sizeof(int));
  printf("unsigned int: \t%ld\n",sizeof(unsigned int));
  printf("unsigned long: \t%ld\n",sizeof(unsigned long));
  printf("float: \t\t%ld\n",sizeof(float));
  printf("double: \t%ld\n",sizeof(double));
  return 0;
}
