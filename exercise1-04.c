/***********************************
 Problem 1.4
 
 The following lines of code, when arranged in the proper sequence, output the simple message "All your base are belong to us."

  1. return 0;
  2. const char msg[] = MSG1;
  3. }
  4. #define MSG1 "All your base are belong to us."
  5. int main(void) {
  6. #include <stdio.h>
  7. puts(msg);

 Write out the proper arrangement (line numbers are sufficient) of this code. 

 Solution:
 
 The correct arrangement is:

  6, 4, 5, 2, 7, 1, 3

 The source code is given below:
 ***********************************/
#include <stdio.h>

#define MSG1 "All your base are belong to us!"

int main(void) {
  const char msg[] = MSG1;
  puts(msg);
  return 0;
}
