#include <stdio.h>
#include <stdlib.h>


#define ARR_SIZE 10

void array_print (int arr [], int size) {
    printf("Arr = [");
    for (int i = 0; i < size - 1; i++) {
        printf ("%d,", arr [i]);
    }
    printf("%d]\n", arr [size - 1]);
}

int sum_arrays(int arr1[], int arr2[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr1[i] + arr2[i];
  }
  return sum;
}

int* sum_arrays_to_one_array(int arr1[], int arr2[], int size) {
  int* sum_array = malloc(size * sizeof(int));
 
  for (int i = 0; i < size; i++) {
    sum_array[i] = arr1[i] + arr2[i];
  }
  
  return sum_array;
}

int main () {
    int array1 [ARR_SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int array2 [ARR_SIZE] = {1, 1, 4, 3, 4, 5, 6, 7, 8, 9};
    array_print (array1, ARR_SIZE);
    array_print (array2, ARR_SIZE);

    int sum = sum_arrays(array1, array2, ARR_SIZE);
    printf("The sum of the two arrays is %d.\n", sum);

    int* sum_array = sum_arrays_to_one_array(array1, array2, 10);

    printf("The sum array is: ");
    array_print (sum_array, ARR_SIZE);
    printf("\n");

    free(sum_array);

    return 0;
}