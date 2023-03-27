// A program that takes an integer as an input and tell if it is divisible by 5 or not :

#include <stdio.h>

int main()
{
    int y;
    printf("Enter an integer : ");
    scanf("%d", &y);

    if (y % 5 == 0)
    {
        if (y == 0)
        {
            printf("It is not divisible by 5");
        }
        else
        {
            printf("%d is divisible by 5.", y);
        }
    }
    else
    {
        printf("%d is not divisible by 5.", y);
    }

    return 0;
}