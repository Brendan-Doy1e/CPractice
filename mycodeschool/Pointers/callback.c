#include <stdio.h>

void A() {// executes
    printf("Hello\n");
}

void B(void (*ptr)()) { // passes in A
    // Callback to A
    ptr();
}

int main(){
    // calls B
    B(A);

    return 0;
}