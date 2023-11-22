#include <stdio.h>
#include <stdlib.h>

int main() {
  int *arr[10];

  // Allocate memory for the array of pointers
  for (int i = 0; i < 10; i++) {
    arr[i] = malloc(sizeof(int));
  }

  // Scanf the array elements from input
  for (int i = 0; i < 10; i++) {
    scanf("%d", arr[i]);
  }

  // Calculate the sum of the array elements
  int sum = 0;
  for (int i = 0; i < 10; i++) {
    sum += *arr[i];
  }

  // Print the sum of the array elements
  printf("The sum of the array elements is: %d\n", sum);

  // Free the memory allocated for the array of pointers
  for (int i = 0; i < 10; i++) {
    free(arr[i]);
  }

  return 0;
}
