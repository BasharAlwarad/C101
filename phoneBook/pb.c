#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[100];
    char number[20];
}
person;


int main(void)
{
    person people[2];

    printf("name: ");
    scanf("%99s", people[0].name); // Read up to 99 characters, leaving space for null terminator
    printf("phone: ");
    scanf("%19s", people[0].number); // Read up to 19 characters

    printf("user: %s\nnumber: %s\n", people[0].name, people[0].number);
}