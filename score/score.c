#include <stdio.h>
#include <stdlib.h>

// Function prototypes
int* user_input(int *size);
float score(int *arr, int size);
void output(float result);

int main(void) {
    int size;
    int *numbers = user_input(&size);
    if (size == 0) {
        printf("No valid input received.\n");
        return 0;
    }

    float result = score(numbers, size);
    output(result);

    free(numbers); // Free allocated memory
    return 0;
}

int* user_input(int *size) {
    int capacity = 2;
    int count = 0;
    int *arr = malloc(capacity * sizeof(int));
    int temp;

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    while (1) {
        printf("Enter an integer (1-10, 0 to finish): ");
        scanf("%d", &temp);

        if (temp == 0) break;
        if (temp < 1 || temp > 10) continue;

        if (count == capacity) {
            capacity *= 2;
            arr = realloc(arr, capacity * sizeof(int));
            if (arr == NULL) {
                printf("Memory reallocation failed.\n");
                exit(1);
            }
        }

        arr[count++] = temp;
    }

    *size = count;
    return arr;
}

float score(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return size > 0 ? (float)sum / size : 0.0;
}

void output(float result) {
    printf("score: %.2f\n", result);
}



// #include <stdio.h>
// // Function prototypes
// void user_input(int arr[2]);
// float score(int arr[2]);
// void output(float result);
// // Function prototypes

// int main(void) {
//     int numbers[2];
//     user_input(numbers);
//     float result = score(numbers);
//     output(result);
//     return 0;
// }

// void user_input(int arr[2]) {
//     do {
//         printf("Enter the first integer: ");
//         scanf("%d", &arr[0]);
//     } while (arr[0] < 1 || arr[0] > 10);
    
//     do {
//         printf("Enter the second integer: ");
//         scanf("%d", &arr[1]);
//     } while (arr[1] < 1 || arr[1] > 10);
// }

// float score(int arr[2]) {
//     return (arr[0] + arr[1]) /(float) 2;
// }

// void output(float result) {
//     printf("score: %.2f\n", result);
// }
