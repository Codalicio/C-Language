// Take three positive integers as an input and print the greatest of them
// using 'else if' statement and 'logical operator' :

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

    if (a > b && a > c)
    {
        printf("%d is the greatest.", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is the greatest.", b);
    }
    else
    {
        printf("%d is the greatest.", c);
    }

    return 0;
}