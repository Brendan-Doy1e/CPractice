#include <stdio.h>
#include <string.h>

int main() {

    char C[4];
    C[0] = 'J';
    C[1] = 'o';
    C[2] = 'h';
    C[3] = 'n';

    int len = strlen(C);

    printf("%s\nlength is %d\n\n", C, len);

    char B[20] = {"Brendan"};
    int leng = strlen(B);
    printf("%s\nlength is %d\n", B, leng);

    char N[20] = {'N', 'i', 'c', 'k'};
    int length = strlen(N);
    printf("%s\nlength is %d\n", N, length);

    
    return 0;
}