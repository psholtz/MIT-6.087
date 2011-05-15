/**
 * Problem 2.4: Using precedence rules, evaluate the following expressions
 * and determine the value of the variables (without running the code).
 * Also rewrite them using parentheses to make the order explicit.
 *
 * Solution: Given in code below.
 */

#include <stdio.h>

/**
 * Run first test, without parentheses. 
 */
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

/**
 * Run the first test, with parentheses.
 */
void test1p() {
  puts("===============");
  puts("    Test 1");
  puts("---------------");
  puts("");

  int x = 0xFF33;
  int MASK = 0xFF00;

  printf(" %d %d\n",x,MASK);

  int c;
  c = x & (MASK == 0);

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
  test1p();

  test2();
  test3();

  return 0;
}
