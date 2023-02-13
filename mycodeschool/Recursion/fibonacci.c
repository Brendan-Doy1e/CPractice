#include <stdio.h>

// easy to make but shitty because its slow

int fib(int n){
    if(n <= 1){
        return n;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

int main() {
    
    int n = 40;
    int final = fib(n);
    printf("%d\n", final);

    return 0;
}