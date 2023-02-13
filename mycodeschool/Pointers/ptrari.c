#include <stdio.h>

int main() {

    int a = 10;
    int* p;
    p = &a;

    printf("%p\n", p); // address 200
    printf("%d\n", *p); // points to the value at the address of a
    printf("size of an int: bytes %li\n", sizeof(int)); // 4 bytes
    printf("%p\n", p + 1); // address 204
    printf("%p\n", p + 2); // address 208
    printf("%d\n", *(p + 1)); // gives garbage


    char x = 'A';
    char* q;
    q = &x;

    printf("%p\n", q); // address 200
    printf("%c\n", *q); // points to the value at the address of a
    printf("size of an int: bytes %li\n", sizeof(char)); // 4 bytes
    printf("%p\n", q + 1); // address 204
    printf("%p\n", q + 2); // address 208
    printf("%c\n", *(q + 1)); // gives garbage

    return 0;
}