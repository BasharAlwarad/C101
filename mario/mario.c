#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <math.h>
#include <limits.h>

// 🤖🤖🤖 Existing functions 🤖🤖🤖
int user_input(void);
void print_grid(int size);
// 🤖🤖🤖 Existing functions 🤖🤖🤖

int main(void){
    int n = user_input();
    print_grid(n);
}

int user_input(void) {
    int n;
    do {
        printf("Enter an integer between 1 and 10: ");
        scanf("%d", &n);
    } while (n < 1 || n > 10);
    return n;
}

void print_grid(int size) {
    for (int i = 0; i < size; i++) {
        printf("\n%d:", i + 1);
        for (int j = 0; j < i + 1; j++) {
            printf("#");
        }
    }
    printf("\n");
}