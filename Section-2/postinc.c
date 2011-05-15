/**
 * An example illustrating operator precedence in C.
 * 
 * The postfix operator ++ has the higest precedence, but it is 
 * executed only AFTER evaluation of the expression completes. 
 * Hence, when the operation completes, p will be pointing to the 
 * second element of i, and its value will be 5. But during evaluation 
 * of the expression, it will be pointing to the first element of i,
 * and its value will be 3. 
 *
 * The value assigned to j is *p, where p is pointing to the first 
 * element of i, which is 3, decremented by 1. Note that not only is 
 * this value assigned to j, but the prefix decrement operator modifies 
 * the value of i[0] as well, changing it from 3 to 2.
 */

#include <stdio.h>

void test1() {
  int i[] = { 3, 5 };
  int *p = i;
  int j = --*p++;

  printf("   j = %d\n",j);
  printf("  *p = %d\n",*p);
  printf("i[0] = %d\n",i[0]);
  puts("");
}

void test2() {
  int i[] = { 3, 5 };
  int *p = i;
  int j = --(*(p++));

  printf("   j = %d\n",j);
  printf("  *p = %d\n",*p);
  printf("i[0] = %d\n",i[0]);
  puts("");
}

int main(void) {

  test1();
  test2();

  return 0;
}
