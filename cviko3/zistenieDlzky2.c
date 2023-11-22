#include <stdio.h>

int main(){
    char str[101];

    printf("vyber retazec: ");
    scanf("%100s", str);
    printf("\n");
    printf("napisali ste => %s\n", str);

    int str_len = 0;
    while (str[str_len] != '\0'){
        str_len++;
    }
    printf("dlzka stringu: %d\n", str_len);

    return 0;
}