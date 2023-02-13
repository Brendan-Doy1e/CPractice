#include <stdio.h>

void Double(int* A, int size){
    for(int i = 0; i < size; i++){
        A[i] = 2 *A[i];
    }
}

int main() {

    int A[] = {2,4,5,6,7};
    int size = sizeof(A)/sizeof(A[0]);
    Double(A, size);
    for(int i = 0; i < size; i++){
    printf("%d\n", A[i]);
    }
    return 0;
}