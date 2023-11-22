#include <stdio.h>
int is_alpha(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int is_name(char arr[])
{
    int idx = 0;

    while(arr[idx] != '\0')
    {
        if (!is_alpha(arr[idx]))
        {
            printf("obsahuje nealfabeticke symboli\n");
            return 0;
        }
        idx ++;        
    }
    return 1;
}

int main(){
    char name[21];
    char surname[21];

    printf("napis svoje meno: ");
    scanf("%20s", name);

    if (!is_name(name))
    {
        return 1;
    }
    
    printf("napis svoje priezvisko: ");
    scanf("%20s", surname);

    if (!is_name(surname))
    {
        return 1;
    }
    
    printf("tvoje cele meno je %s %s\n", name, surname);

    return 0;
}