#include <stdio.h>

int main() {
    int i;

    // Using while loop
    printf("While loop:\n");
    i = 1;
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }

    // Using for loop
    printf("\n\nFor loop:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    // Using do-while loop
    printf("\n\nDo-while loop:\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 10);

    return 0;
}