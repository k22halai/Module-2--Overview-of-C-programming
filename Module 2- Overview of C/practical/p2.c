#include <stdio.h>   // Standard input-output header

// Define a constant using #define
#define PI 3.14159

int main() {
    // Declare variables of different data types
    int age = 20;             // Integer variable
    char grade = 'A';         // Character variable
    float height = 5.7;       // Floating-point variable

    // Declare a constant using const keyword
    const int YEAR = 2025;

    // Display values of variables and constants
    printf("Age (int): %d\n", age);
    printf("Grade (char): %c\n", grade);
    printf("Height (float): %.2f\n", height);  // %.2f formats float to 2 decimal places
    printf("Year (const int): %d\n", YEAR);
    printf("Value of PI (constant): %.5f\n", PI);

    return 0;  // End of program
}
