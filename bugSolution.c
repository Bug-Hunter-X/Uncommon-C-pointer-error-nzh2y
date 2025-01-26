#include <stdio.h>

int main() {
  int x = 10;
  int *ptr = &x; // Pointer correctly initialized

  //Check if the pointer is valid before dereferencing it
  if (ptr != NULL) {
    *ptr = 20; 
    printf("%d\n", x); // Output: 20
  } else {
    fprintf(stderr, "Error: Pointer is NULL.\n");
    return 1; // Return an error code
  }

  return 0;
} 