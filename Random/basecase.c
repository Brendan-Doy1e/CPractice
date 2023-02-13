#include <stdio.h>

int factorial(int);

int main() {
    int x, n;
    printf(" Enter the Number to Find Factorial :");
    scanf("%d", &n);

    x = factorial(n);
    printf(" Factorial of %d is %d\n", n, x);

    return 0;
}

int factorial(int n) {
    if (n == 0)
        return (1);
    return (n * factorial(n - 1));
}
