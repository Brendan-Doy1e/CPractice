#include <stdio.h>

int factorial(int n) {
        if(n == 0){ // base case is a termination condition
            return 1;
        } else {
            return n * factorial(n-1);
        }

    }

int main() {

    int n = 5;
    int sum = factorial(n);
    printf("%d\n", sum);

    return 0;
}