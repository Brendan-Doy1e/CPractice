#include <stdio.h>
#include <stdlib.h>

int main() {

    //malloc -void* malloc (size_t size)
    // size_t - stores only positive ints (unsigned int)
    //void* p  = malloc(n*sizeof(int))

    // calloc - void* calloc(size_t num, size_t size)
    // calloc initializes

    //used to move the malloc to a new malloc
    // realloc - void* realloc(void* ptr, size_t size)

    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int* A = (int*)malloc(n * sizeof(int));

    for(int i =0; i <n; i++) {
        A[i] = i + 1;
    }
    free(A);
    for(int i = 0; i  < n; i++) {
        printf("%d", A[i]);
    }
    printf("\n");

    return 0;
}