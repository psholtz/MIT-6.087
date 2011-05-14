/*

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
  return 0;
}
