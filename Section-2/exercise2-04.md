Exercise 2.4
============ 

Solution
-------- 

**Question 1**

```c
x = 0xFF33;
MASK = 0xFF00;
c = x & MASK == 0;
```

In C, the relational equality operator == has higher precedence than the bitwise AND operator. 

Accordingly, we can render the parentheses as:

```c
c = x & (MASK == 0);
```

The register settings for x look like:

1111 1111 0011 0011

and the register settings for MASK look like:

1111 1111 0000 0000 

The expression MASK == 0 evaluates to 0, and the bitwise AND combination of x and 0 also clearly evaluates to 0.

Therefore, the variable c will contain 0.

Interestingly, if we render the parentheses the other way, we still get the same answer.

Specifically, x & MASK == MASK, that is, the register expression for x & MASK is:

1111 1111 0000 0000

and the bitwise AND combination of x & MASK and 0 will still evaluate to 0.

When the expression finishes evaluating, the following values are stored in the respective variables:

```c
x    <-- 0xFF33
MASK <-- 0xFF00
c    <-- 0
```

**Question 2**

```c
x = 10;
y = 2;
z = 2;
z = y = x++ + ++y*2;
```

This expression will result in the same value being stored in the variables y and z.

The question is, what value will that be? 

Of the operators in the expression above, the highest precedence is given to the postfix increment/decrement operator ++.

The next highest precedence is given to the prefix increment/decrement operator ++.

Finally, multiplication * has higher precedence than addition +.

Thus, we can write the expression as:

```c
z = y = (x++) + ((++y)*2);
```

What values will be stored in these variables after the expression evaluates?

The prefix ++ operator will increment the value of y, and it will do so BEFORE the expression evaluates. Thus, by the time the expression evaluates, the value stored in y is already 3. Similarly, the postfix operator ++ will increment the value of x, but only AFTER the expression evaluates. Thus, when the expression evaluates, the value stored in x will still be 10.

Hence, the value stored in y and z will be 16.

After the expression evaluates, the value of x will be increment to 11.

```c
x <-- 11
y <-- 16
z <-- 16
```

**Question 3**

```c
x = 10;
y = 4;
z = 1;
y >>= x & 0x2 && z;
```

Perhaps the most stranglest looking operator in this expression is >>=, which in fact is simply the bitwise right operator with assignment. Knowing that, we will evaluate the right-hand side of the expression, shift the answer bitwise by that value to the right, and store the resulting value in y.

We expect that only the value of y will be changed, and that the values of x and z will remain as they are.

& represents bitwise AND, and && represents logical AND. 

Bitwise AND is of higher precedence than logical AND. 

Hence, we can write this expression using parentheses as:

```c
y >>= (x & 0x2) && z;
```

What value will be stored in y?

The register value of x = 10 looks like:

 1 0 1 0 

and the register value of 2 looks like:

 0 0 1 0 

Bitwise AND of these values yields simply 2. 

Taking the logical AND of 2 and z=1 yields 1. 

Hence the expression reduces to:

```c
y >>= 1;
```

or shifting y bitwise to the right by 1 bit, and assigning that new value to y. 

Shifting y=4 bitwise to the right by 1 bit yields 2. 

Hence, we expect that y=2 after this expression evaluates.

```c
x <-- 10
y <-- 2
z <-- 1
```