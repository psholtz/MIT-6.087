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

and the bitwise AND combination of x & MASK and 0 will likewise evaluate to 0.