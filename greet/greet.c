#include <stdio.h>    // For printf
#include <string.h>   // (Not used here, but included for string functions)
#include <ctype.h>    // (Not used here, but included for character functions)

// Function to greet the user by name
void greet(const char *name) {
    // Print a greeting message with the provided name
    printf("Hello, %s\n", name);
}

int main(int argc, char *argv[]) {
    // Check if the user provided a command-line argument (the name)
    if (argc < 2) {
        // If not, print usage instructions and exit with error code 1
        printf("Usage: %s <name>\n", argv[0]);
        return 1;
    }
    // Call the greet function with the first command-line argument
    greet(argv[1]);
    // Return 0 to indicate successful execution
    return 0;
}