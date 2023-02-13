#include <stdio.h>

int main() {

    int A[] = {2, 4, 5, 8, 1};
    
    
    for(int i = 0; i < sizeof(A)/sizeof(A[0]); i++){
        printf("-----------------------\n");
        printf("address = %p\n", &A[i]);
        printf("address = %p\n", A+i);
        printf("value = %d\n", A[i]);
        printf("value = %d\n", *(A+i));
    }

    return 0;
}