#include <stdio.h>

int main() {

    int B[3][3][3] = {{{21, 34,66}, {66, 99, 12}, 
                     {111, 222, 1333}, {1,2,3},
                     {22,33,44}, {666,888,999}}};

    printf("Address of B is %p\n", B);
    printf("%d\t", B[0][0][2]);
    printf("%d\t", B[0][1]);
    printf("%d\n", B[0][2]);
    printf("%d\t", B[1][0]);
    printf("%d\t", B[1][1]);
    printf("%d\n", B[1][2]);
    printf("%d\t", B[2][0]);
    printf("%d\t", B[2][1]);
    printf("%d\n", B[2][2]);
    printf("%d\n", B[0][0][0]);

    return 0;
}