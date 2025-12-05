#include <stdio.h>

int main() {
    int x = 10;       // variable
    int *ptr;         // pointer to int

    ptr = &x;         // store address of x in ptr

    printf("Original value of x = %d\n", x);

    *ptr = 20;        // modify x using pointer

    printf("Modified value of x = %d\n", x);

    return 0;
}