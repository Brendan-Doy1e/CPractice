#include <stdio.h>

int main() {

    int x = 5;
    int* p;
    p = &x;
    printf("address of x is %p, value of x is %d\n", p, *p);

    *p = 6;
    printf("address of p is %p, value of x is %d\n", p, *p);

    int** q;
    q = &p;
    printf("address of q is %p, value of x is %d\n", q, **q);

    int*** r = &q;
    printf("address of r is %p, value of x is %d\n", r, ***r);
    ***r = 10;
    printf("x = %d\n", x);

    return 0;
}