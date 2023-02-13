#include <stdio.h>

int factorial(int n) {
        if(n == 0){ // base case is a termination condition
            return 1;
        } else {
            return n * factorial(n-1);
        }

    }

int fib(int t){
    if(t <= 1){
        return t;
    } else {
        return fib(t-1) + fib(t-2);
    }
}

int main() {

    int n = 10;
    int sum = factorial(n);
    printf("%d\n", sum);

    int t = 20;
    int fibsum = fib(t);
    printf("%d\n", fibsum);

    return 0;
}