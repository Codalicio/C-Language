// Take three positive integers as an input and print the greatest of them :

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter 1st integer : ");
    scanf("%d", &a);

    printf("Enter 2nd integer : ");
    scanf("%d", &b);

    printf("Enter 3rd integer : ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the greatest.", a);
        }
        else
        {
            printf("%d is the greatest.", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is the greatest.", b);
        }
        else
        {
            printf("%d is the greatest.", c);
        }
    }

    return 0;
}