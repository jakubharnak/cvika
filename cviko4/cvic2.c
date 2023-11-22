#include <stdio.h>

int is_set(int set[], int len);

int main() {
    int set1[5] = {2, 2, 3, 4, 5};
    int set2[5] = {1, 2, 3, 4, 5};

    // ...

    if (!is_set(set1, 5)) {
        printf("error");
        return 1;
    }

    if (!is_set(set2, 5)) {
        printf("error");
        return 1;
    }

    // Find the duplicate numbers in the first set.
    int duplicate_numbers[5];
    int num_duplicates = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i; j++) {
            if (set1[i] == set1[j]) {
                duplicate_numbers[num_duplicates] = set1[i];
                num_duplicates++;
                break;
            }
        }
    }

    // Print the duplicate numbers in the first set to the console.
    if (num_duplicates > 0) {
        printf("The duplicate numbers in the first set are: ");
        for (int i = 0; i < num_duplicates; i++) {
            printf("%d ", duplicate_numbers[i]);
        }
        printf("\n");
    } else {
        printf("There are no duplicate numbers in the first set.\n");
    }

    return 0;
}
