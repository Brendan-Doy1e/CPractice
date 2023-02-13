#include <stdio.h>

int main(){

    int a = 5; // int
    int *p; // pointer to int
    p = &a;
    int b = 20;
    printf("%p\n", p); // prints address of a
    printf("%d\n", *p); // prints value at a
    printf("%p\n", &a); // prints address of a
    printf("%d\n", a); // prints value of a
    *p = 12; // derefrencing "value at address p is now 12"
    printf("%d\n", a); // prints value of a
    *p = b;
    printf("%p\n", p); // prints address of a
    printf("%d\n", *p); // prints value of a


    char c; // char
    char *p0; // pointer to char
    double d; // double
    double *p1; // pointer to dbl

    p = &a;
    a = 8;

    return 0;
}