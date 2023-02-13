#include <stdio.h>

int main() {

    int a;
    int* p;
    p = &a;
    a = 5;

    printf("%p\n", p); //gets the address 
    printf("%p\n", &a); //gets the address
    printf("%p\n", &p); //gets the address
    printf("%d\n", *p); //gets the address

    *p = 8; 
    printf("%d\n", *p);
    printf("%d\n", a);

    
}