#include <stdio.h>

int main() {
    int i;

    // Using break: stop when number reaches 5
    printf("Using break:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5)
            break;
        printf("%d ", i);
    }

    // Using continue: skip number 3
    printf("\n\nUsing continue:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 3)
            continue;
        printf("%d ", i);
    }

    return 0;
}