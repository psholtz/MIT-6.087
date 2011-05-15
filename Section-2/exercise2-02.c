/**
 * Problem 2.2: Write logical expressions that tests whether a given character variable c is:
 *
 *  - lower case letter;
 *  - upper case letter;
 *  - digit;
 *  - whitespace (including space, tab, newline);
 *
 * Solution: Given below in C code.
 */

#include <stdio.h>
#include <ctype.h>

/**
 * Function takes one character argument.
 * 
 * Function performs the following introspection on the argument character:
 * 
 *  - Tests whether char is lower case;
 *  - Tests whether char is upper case;
 *  - Tests whether char is a digit;
 *  - Tests whether char is whitespace;
 */
void introspect(char c) {
  puts("");

  if ( islower(c) ) {
    printf("'%c' is lowercase\n",c);
  } else {
    printf("'%c' is not lowercase\n",c);
  }

  if ( isupper(c) ) {
    printf("'%c' is uppercase\n",c);
  } else {
    printf("'%c' is not uppercase\n",c);
  }

  if ( isdigit(c) ) {
    printf("'%c' is a digit\n",c);
  } else {
    printf("'%c' is not a digit\n",c);
  }

  if ( isspace(c) ) {
    printf("'%c' is whitespace\n",c);
  } else {
    printf("'%c' is not whitespace\n",c);
  }

  puts("");
}

int main(void) {
  introspect('c');
  introspect('C');
  introspect('1');
  introspect(' '); 
  return 0;
}
