/**
 *
 */
#include <stdio.h>

void test1() {
  puts("===============");
  puts("    Test 1");
  puts("---------------");
  puts("");

  int x = 0xFF33;
  int MASK = 0xFF00;

  printf(" %d %d\n",x,MASK);

  int c;
  c = x & MASK == 0;

  printf(" %d %d %d\n",x,MASK,c);

  puts("===============");
  puts("");
}

void test2() {
  puts("==========");
  puts("  Test 2");
  puts("----------");
  puts("");

  int x = 10, y = 2, z = 2;
  printf(" %d %d %d\n",x,y,z);
  z = y = x++ + ++y*2;
  printf(" %d %d %d\n",x,y,z);

  puts("==========");
  puts("");
}

void test3() {
  puts("========");
  puts(" Test 3");
  puts("--------");
  puts("");

  int x = 10, y = 4, z = 1;
  printf(" %d %d %d\n",x,y,z);
  y >>= x & 0x2 && z;
  printf(" %d %d %d\n",x,y,z);

  puts("========");
  puts("");
}

int main(void) {

  test1();
  test2();
  test3();

  return 0;
}
