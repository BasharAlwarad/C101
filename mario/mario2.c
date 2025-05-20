#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <math.h>
#include <limits.h>


int user_input(void) {
    int x;
    do {
        printf("Enter the first integer: ");
        scanf("%d", &x);
    } while (x < 1 || x > 10);
    return 0;
}

int main(void) {
    int n= user_input();

    for (int i = 0; i < n; i++) {
        printf("\n%d:", i + 1);
        for (int j = 0; j < i + 1; j++) {
            printf("#");
        }
    }

    printf("\n");
    return 0;
}