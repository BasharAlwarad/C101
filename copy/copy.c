#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// 🤖🤖🤖 Existing functions 🤖🤖🤖
int user_input(void);
void drow(int size);
// 🤖🤖🤖 Existing functions 🤖🤖🤖

int main(void){
    char s[100]; // allocate space for the name
    printf("Enter your name: ");
    scanf("%99s", s); // read up to 99 characters, leaving space for null terminator
    if (s==NULL){return 1;}
    
    char *t=malloc(strlen(s)+1);
    if (t==NULL){return 1;}
    // char *t=malloc(2);
    // for (int i = 0,l=strlen(s) +1; i < l ; i++)
    // {
    //     t[i]=s[i];
    // }
    strcpy(t,s);

    if (strlen(t)>0)
    {
        t[0]=toupper(t[0]);
    }
    
    
    printf("%s\n", s);
    printf("%s\n", t);
    free(t);
    printf("%s\n", t);
    return 0;
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