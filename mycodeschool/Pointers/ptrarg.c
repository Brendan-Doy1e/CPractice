#include <stdio.h>

void Increment(int* p){ 
    printf("value of a before increment in function = %d\n", *p);

    *p = *p + 1;
    printf("value of a = %d\n", *p);

}

int main() {

    int a = 10;

    Increment(&a); // passes the address of a to the function
    printf("address of a = %p\n", &a); // different address than the a in function, a is local

    printf("a = %d\n", a);

    return 0;
}