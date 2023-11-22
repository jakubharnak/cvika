#include <stdio.h>

int main(){

    char str[101];

    char replace;
    printf("vyberte pismeno na vymenu: ");
    scanf("%100s", &replace);


    printf("vyber string: ");
    scanf("%100s", str);
    printf("\n");
    printf("napisali ste : ");

    for (int i = 0;str[i] != '\0'; i++)
    {
        if (str[i] == replace)
            str[i] ='_';
    }
    printf("zmeneny str %s", str);

    return 0;
}