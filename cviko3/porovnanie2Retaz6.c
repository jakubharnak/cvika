#include <stdio.h>

int main(){

    char str1[101];
    char str2[101];

    printf("vyber retazec 1: ");
    scanf("%100s", str1);
    printf("retazec 1: %s", str1);
    printf("\n");
    printf("vyber retazec 2: ");
    scanf("%100s", str2);
    printf("retazec 2: %s", str2);
    printf("\n");

    int i = 0;

    while(str1[i] != '\0' && str2[i] != '\0'){
        if (str1[i] != str2[i])
            break;
        i++;        
    }

    if (str1[i] == '\0' && str2[i] == '\0'){
        printf("The two strings are identical.\n");
    } else {
        printf("The two strings are different (first difference on index %d).\n", i);
    }


    return 0;
}