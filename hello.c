#include <stdio.h>
#include <string.h> // Include string.h for strcmp

int main() {
    char fname[50]; // Allocate space for the user's input
    char lname[50]; // Allocate space for the user's input

    printf("Enter your first name: ");
    scanf("%49s", fname); // Read up to 49 characters to avoid buffer overflow

    printf("Enter your last name: ");
    scanf("%49s", lname); // Read up to 49 characters to avoid buffer overflow

    // Compare the contents of fname and lname
    if (strcmp(fname, lname) == 0) {
        printf("The first name and last name are the same.\n");
    } else {
        printf("Hello, %s, %s!\n", fname, lname); // Print the user's name
    }

    int num1, num2; // Declare two integer variables

    // Prompt the user for the first integer
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    // Prompt the user for the second integer
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Compare the two integers
    if (num1 > num2) {
        printf("The first number (%d) is greater than the second number (%d).\n", num1, num2);
    } else if (num1 < num2) {
        printf("The first number (%d) is less than the second number (%d).\n", num1, num2);
    } else {
        printf("The first number (%d) is equal to the second number (%d).\n", num1, num2);
    }

    return 0;
}
