// Take a positive integer as an input and tell if it is divisible by 5 or 3
// but not divisible by 15 (using nested if else) :

#include <stdio.h>

int main()
{
    int x;
    printf("Enter a positive integer : ");
    scanf("%d", &x);

    if (x % 5 == 0 || x % 3 == 0)
    {
        if (x % 15 != 0)
        {
            printf("The number %d is divisible by 5 or 3.", x);
        }
        else
        {
            printf("The number %d is divisible by 15.", x);
        }
    }
    else
    {
        printf("The number %d is not divisible by 5 or 3.", x);
    }

    return 0;
}