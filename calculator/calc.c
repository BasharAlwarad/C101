#include <stdio.h>
// Function prototypes
void user_input(int arr[2]);
int calc(int arr[2]);
void output(int result);
// Function prototypes

int main(void) {
    int numbers[2];
    user_input(numbers);
    int result = calc(numbers);
    output(result);
    return 0;
}

void user_input(int arr[2]) {
    do {
        printf("Enter the first integer: ");
        scanf("%d", &arr[0]);
    } while (arr[0] < 1 || arr[0] > 10);
    
    do {
        printf("Enter the second integer: ");
        scanf("%d", &arr[1]);
    } while (arr[1] < 1 || arr[1] > 10);
}

int calc(int arr[2]) {
    return arr[0] * arr[1];
}

void output(int result) {
    float x = (float) result * 0.5;
    printf("Result of multiplication: %.2f\n", x);
}
