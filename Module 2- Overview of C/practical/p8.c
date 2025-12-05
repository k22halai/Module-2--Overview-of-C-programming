#include <stdio.h>

int main() {
    int arr1[5], i;
    int arr2[3][3], r, c, sum = 0;

    // 1D array input and output
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr1[i]);

    printf("1D Array elements:\n");
    for (i = 0; i < 5; i++)
        printf("%d ", arr1[i]);

    // 2D array input
    printf("\n\nEnter 3x3 matrix elements:\n");
    for (r = 0; r < 3; r++)
        for (c = 0; c < 3; c++) {
            scanf("%d", &arr2[r][c]);
            sum += arr2[r][c]; // calculate sum
        }

    // 2D array output
    printf("\nMatrix:\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++)
            printf("%d ", arr2[r][c]);
        printf("\n");
    }

    printf("\nSum of all matrix elements = %d\n", sum);

    return 0;
}