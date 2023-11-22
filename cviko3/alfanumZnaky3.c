#include <stdio.h>

int main(){
    char str[101];

    printf("vyber retazec: ");
    scanf("%s", str);
    printf("\n");
    printf("napisali ste => %s\n", str);

    int alpha = 0, num = 0;
    for (int i = 0;str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z')||(str[i] >= 'a' && str[i] <= 'z'))
            alpha++;
        else if (str[i] >= '0' && str[i] <= '9')
            num++;
    }
    
    printf("Alphabetic characters: %d\nNumeric characters: %d\n", alpha, num);

    return 0;
}