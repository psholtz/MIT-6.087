/*

 */
#include <stdio.h>

#define array_length(arr) (sizeof(arr) == 0 ? 0 : sizeof(arr)/sizeof((arr)[0]))

int arr[] = { 1, 6, 3, 7, 10 };

void shift_element(unsigned int i) {
  int ivalue;
  /* guard against going outside array */
  for ( ivalue = arr[i]; i && arr[i-1] > ivalue; i-- ) {
    arr[i] = arr[i-1];
  }
  arr[i] = ivalue;
}

void insertion_sort(void) {
  unsigned int i, len = array_length(arr);
  for ( i=1;i<len; i++ ) {
    if ( arr[i] < arr[i-1] ) {
      shift_element(i);
    }
  }
}

void print_array() {
  printf("\n");
  int i, size = array_length(arr);
  for ( i=0; i < size; ++i ) {
    printf("%d",arr[i]);
    if ( i < size-1 ) {
      printf(", ");
    }
  }
  printf(" (%d elements)\n",size);
}

int main(void) {
  print_array();
  insertion_sort();
  print_array();
}
