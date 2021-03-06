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

The first statement, `y=++x+y`, will evaluate as follows: the prefix increment operator ++ will first increment x from 10 to 11. This value will then be added to the value of y, 3, and the new value, 14, will be stored in y. 

After the first statement is evaluated, the values stored in the variables will be:

```c
x <-- 11
y <-- 14
z <-- 0
```

The second statement, `z=z-->x;`, will evaluate as follows: the postfix decrement operator -- has the highest precedence, but will execute only AFTER the expression is evaluated. Hence, during expression evaluation, we will take the (present) value of z, and see whether it is larger than x, which is 11. The answer is no, z is not larger than x. Hence the "answer" stored in z will be zero. But at this point, expression evaluation terminates and the postfix decrement operator will be applied to z and reduce it by 1. 

Hence, the final value stored in z will be -1. 

After the second statement is evaluated, the values stored in the variable will be:

```c
x <-- 11
y <-- 14
z <-- -1 
```

The expressions could perhaps be expressed more clearly using parentheses:

```c
y = (++x) + y;
z = (z--) > x;
```

**Question 4**

```c
int MASK = 0xF;
int ison = x & MASK == MASK;
```

The problem with this statement is that the equivalence relation has higher precedence than the logical AND operation. In other words, the above code will evaluate as:

```c
int ison = x & (MASK == MASK);
```

Since `(MASK==MASK)` always evaluates to true (i.e., 1), the code merely tests whether the last bit of x is turned on. 

For example, `x=1` will give a signal of `ison=1`, even though only 1 bit of x is on, and not all four.

The correct code should be written as:

```c
int MASK = 0xF;
int ison = ( x & MASK ) == MASK;
```

