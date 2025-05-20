#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// 🤖🤖🤖 Existing functions 🤖🤖🤖
int user_input(void);
void drow(int size);
// 🤖🤖🤖 Existing functions 🤖🤖🤖

int main(void){
 int score[1234];
 for (int i = 0; i < 1234; i++)
 {
    printf("%i\n",score[i]);
 }
 
}

int user_input(void) {
    int n;
    do {
        printf("Enter an integer between 1 and 10: ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);
    return n;
}

void drow(int size) {
    if (size <= 0) { return; }      // 1. Base case: stop recursion when size is 0 or less
    drow(size - 1);                 // 2. Recursive call: call drow with a smaller size
    printf("%p:", size);            // 3. After recursion, print the current size
    for (int i = 0; i < size; i++) {
        printf("#");                // 4. Print '#' size times
    }
    printf("\n");                   // 5. Newline after each row
}