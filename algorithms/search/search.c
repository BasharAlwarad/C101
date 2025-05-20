#include <stdio.h>

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 50};
    int n;
    int length = sizeof(numbers) / sizeof(numbers[0]);
    printf("enter a number: ");
    scanf("%d", &n);

    printf("Array length is: %d\n", length);
    for (int i = 0; i < length+1; i++)
    {
        if (n == numbers[i])
        {
            printf("%d found!\n", numbers[i]);
            return 0;
        }
    }
    printf("not found!\n");
    return 1;
}