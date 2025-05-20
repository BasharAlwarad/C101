#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    const char *filename = "phoneBook.csv";
    FILE *file = fopen(filename, "a");
    if (!file) {
        perror("Failed to open file");
        return 1;
    }

    char name[256];
    char number[256];

    printf("Enter your name: ");
    if (!fgets(name, sizeof(name), stdin)) {
        perror("Failed to read name");
        fclose(file);
        return 1;
    }
    name[strcspn(name, "\n")] = '\0'; // Remove trailing newline

    printf("Enter your number: ");
    if (!fgets(number, sizeof(number), stdin)) {
        perror("Failed to read number");
        fclose(file);
        return 1;
    }
    number[strcspn(number, "\n")] = '\0';

    fprintf(file, "%s,%s\n", name, number);
    fclose(file);

    return 0;
}
