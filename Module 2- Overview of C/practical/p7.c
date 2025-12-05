#include <stdio.h>

// Function declaration
int factorial(int n);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Function call
    printf("Factorial of %d = %d\n", num, factorial(num));

    return 0;
}

// Function definition
int factorial(int n) {
    int i, fact = 1;
    for (i = 1; i <= n; i++)
        fact *= i;
    return fact;
}