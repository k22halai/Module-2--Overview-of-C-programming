#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    // Write to file
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "Hello, this is a test string.");
    fclose(fp);

    // Read from file
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fgets(str, sizeof(str), fp);
    fclose(fp);

    // Display contents
    printf("File contents: %s\n", str);

    return 0;
}