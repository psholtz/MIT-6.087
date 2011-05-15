Problem 2.5
=========== 

Determine if the following statements have any errors: 

```c
* int 2nd_value = 10;
* alliszero = (x=1) && (y=0); (with x = 0; y = 0; alliszero = 1;)
* y=++x+y;z=z-->x; (with x = 10; y = 3; z = 0;)
* Assume that we want to test if the last four bits of x are on (with int MASK=0xF; ison = x & MASK==MASK;)
```

Solution
-------- 

**Question 1**

```c
int 2nd_value = 10;
```

The error with this statement is that in C variables may not begin with numbers. 

Perhaps a statement more similar to the following could be used:

```c
int value_2 = 10;
```

**Question 2**

```c
int x = 0;
int y = 0;
int alliszero = 1;
alliszero = (x=1) && (y=0);
```

The statement is correct, if in fact the author intends what actually occurs.

The statements `x=1` and `y=0` are assigments, not logical equivalence relations. 

The "values" assigned to these assignment statements will be 1 and 0, respectively. 

The logical AND of 1 and 0 will yield 0. 

Hence, the value assigned to `alliszero` will be 0.

**Question 3**

```c
int x = 10;
int y = 3;
int z = 0;
y=++x+y;
z=z-->x;
```

These are valid C statements.

The first statement, `y=++x+y`, will evaluate as follows: the prefix increment operator ++ will first increment x from 10 to 11. This value will be added to the value of y, 3, and the new value, 14, will be stored in y. 

After the first statement is evaluated, the values stored in the variables will be:

```c
x <-- 11
y <-- 14
z <-- 0
```

The second statement, `z=z-->x;`, will evaluate as follows: the postfix decrement operator -- has highest precedence, but will execute only AFTER the expression is evaluated. Hence, during expression evaluation, we will take the (present) value of z, and see whether it is larger than x, which is 11. The answer is no, z is not larger than x. Hence the "answer" stored in z will be zero. But at this point, the postfix decrement operator will be applied to z and reduce it by 1. 

Hence, the final value stored in z will be -1. 

After the second statement is evaluated, the values stored in the variable will be:

```c
x <-- 11
y <-- 14
z <-- -1 
```

The expressions could perhaps be expressed more succinctly using parentheses:

```c
y = (++x) + y;
z = (z--) > x;
```

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
