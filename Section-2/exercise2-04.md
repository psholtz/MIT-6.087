Exercise 2.4
============ 

Solution
-------- 

**Question 1**

```c
x = 0xFF33;
MASK = 0xFF33;
c = x & MASK == 0;
```

In C, the relational equality operator == has higher precedence than the bitwise AND operator. Accordingly, we can render the parentheses as:

```c
c = x & (MASK == 0);
```

The register settings for x looks like:

1111 1111 0011 0011

and the register settings for 