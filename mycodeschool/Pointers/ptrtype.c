#include <stdio.h>

int main(){

    // pointer types are strongly typed
    int a = 1025;
    int* p;
    p = &a;

    printf("size of int: %ld bytes.\n", sizeof(int));
    printf("Address is %p, value at that address is %d.\n", p, *p);
    printf("Address is %p, value at that address is %d.\n", p+1, *(p+1));

    char* p0;
    p0 = (char*)p;
    printf("size of char: %ld bytes.\n", sizeof(char));
    printf("Address is %p, value at that address is %d.\n", p0, *p0);

    // void pointer - generic pointer
    void* p1;
    p1 = p;
    printf("Address is %p.\n", p1);

    return 0;
}