#include <stdio.h>
#include <stdlib.h>

int main() {

    int a; //goes on stack
    int *p;
    p = (int*)malloc(sizeof(int)); // goes on heap
    *p = 10;
    free(p); // must clear memory allocation

    p = (int*)malloc(20 * sizeof(int)); // for array malloc
    free(p);


    return 0;
}