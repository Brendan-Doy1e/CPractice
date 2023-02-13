#include <stdio.h>

int main() {

    int A[5];// declare array

    // initializes array
    A[0] = 10;
    A[1] = 20;
    A[2] = 30;
    A[3] = 40;
    A[4] = 50;

    printf("size of the array is %ld\n", sizeof(A)/sizeof(A[0])); // gets the size of the array
    printf("The value at A[] is %p\n", &A); // gets the address of the array
    printf("The value at A[0] is %d\n", A[0]); // prints value at 0
    printf("The value at A[0] is %d\n", *A); // prints value at 0 using pointer
    printf("The value at A[1] is %d\n", *(A+1)); // uses a pointer arithmytic to get the value at a different index
    printf("The value at A[4] is %d\n", *(A+3));


    return 0;
}