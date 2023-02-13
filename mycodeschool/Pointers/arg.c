#include <stdio.h>

int SumOfElements(int* A, int size){

    int sum = 0;
    for(int i = 0; i < size; i++) {
        printf("%d\n", A[i]);
        sum += A[i];
    }
    return sum;

}

int main() {

    int A[] = {10,25,32,44,555};
    int size = sizeof(A)/sizeof(A[0]);
    int total = SumOfElements(A, size);

    printf("The sum of the array is %d\n", total);
    return 0;
}