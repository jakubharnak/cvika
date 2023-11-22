#include <stdio.h>

int main(){
    int *p;
    int a = 0;
    int b = 42;

    p = &b;

    printf("1) p = &b: \n");
    printf("p: %p\n", (void *)p);
    printf("&b: %p\n", (void *)&b);
    printf("&p: %p\n", (void *)&p);
    printf("b: %d\n", b);
    printf("*p: %d\n", *p);
    printf("\n");

    p = &a;

    printf("2) p = &a: \n");
    printf("p: %p\n", (void *)p);
    printf("&a: %p\n", (void *)&a);
    printf("&p: %p\n", (void *)&p);
    printf("a: %d\n", a);
    printf("*p: %d\n", *p);
    printf("\n");

    (*p)++;

    printf("3) (*p)++ : \n");
    printf("p: %p\n", (void *)p);
    printf("&a: %p\n", (void *)&a);
    printf("&p: %p\n", (void *)&p);
    printf("a: %d\n", a);
    printf("*p: %d\n", *p);
    printf("\n");

    p++;

    printf("4) p++ : \n");
    printf("p: %p\n", (void *)p);
    printf("&a: %p\n", (void *)&a);
    printf("&p: %p\n", (void *)&p);
    printf("a: %d\n", a);
    printf("*p: %d\n", *p);
    printf("\n");

    p--;

    *p = 5;
    printf("5) p-- : \n");
    printf("p: %p\n", (void *)p);
    printf("&a: %p\n", (void *)&a);
    printf("&p: %p\n", (void *)&p);
    printf("a: %d\n", a);
    printf("*p: %d\n", *p);
    printf("\n");

    p = 9;

    printf("6) p = 9 : \n");
    printf("p: %p\n", (void *)p);
    printf("&a: %p\n", (void *)&a);
    printf("&p: %p\n", (void *)&p);
    printf("a: %d\n", a);
    printf("*p: \n");
    printf("\n");
    p = &a;

    int **p_to_p = &p;

    printf("7) **p_to_p : \n");
    printf("p: %p\n", (void *)p);
    printf("&a: %p\n", (void *)&a);
    printf("&p: %p\n", (void *)&p);
    printf("ptop: %p\n", (void *)p_to_p);
    printf("*ptop: %p\n", (void *)*p_to_p);
    printf("**ptop: %d\n", **p_to_p);
    printf("&ptop: %p\n", (void *)&p_to_p);
    printf("a: %d\n", a);
    printf("p: %d\n", *p);
    printf("\n");
}