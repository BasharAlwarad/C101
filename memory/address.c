#include <stdio.h>
#include <string.h>



// 🤖🤖🤖 Existing functions 🤖🤖🤖
int user_input(void);
void drow(int size);
// 🤖🤖🤖 Existing functions 🤖🤖🤖

int main(void){
    // int x =50;
    // int *p=&x;
    // printf("%i\n",&x);
    // printf("%p\n",x);
    // printf("%p\n",p);
    // printf("%i\n",*p);
    char *c = "Hey";
    char **cc = &c;
    printf("%p : %s\n", &c, c);
    printf("%p\n", cc);
    // for (int i = 0; c[i] != '\0'; i++) {
//     for (int i = 0; i<20; i++) {
//     printf("%p || %p : %c\n", &c[i], c[i], c[i]);
// }

for (int i = 0; i < 20; i++) {
    printf("%p : 0x%02x : %c\n", &c[i], (unsigned char)c[i],
           (c[i] >= 32 && c[i] <= 126) ? c[i] : '.');
}

    // int n = user_input();
    // drow(n);
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