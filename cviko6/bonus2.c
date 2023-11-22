#include <stdio.h>

int main() {
  int *arr[10];

  // Scanf the array elements from input
  for (int i = 0; i < 10; i++) {
    printf("here\n");
    scanf("%d", &arr[i]);
  }

  // Calculate the sum of the array elements
  int sum = 0;
  for (int i = 0; i < 10; i++) {
    sum += *arr[i];

  }

  // Print the sum of the array elements
  printf("The sum of the array elements is: %d\n", sum);

  return 0;
}
