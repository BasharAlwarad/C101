#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char name[100];
    printf("Enter your name: ");
    scanf("%99s", name);

    // Convert name to uppercase
    for (int i = 0, l = strlen(name); i < l; i++) {
        name[i]=toupper((unsigned char)name[i]);
        // if (name[i] >= 'a' && name[i]<='z')
        // {
        //     name[i] = name[i]-32;
        // }
        // else
        // {
        //     NULL;
        // }
     }

    printf("Hello, %s!\n", name);

    return 0;
}
