// Take four positive integers as an input and print the greatest of them :

#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter 1st integer : ");
    scanf("%d", &a);

    printf("Enter 2nd integer : ");
    scanf("%d", &b);

    printf("Enter 3rd integer : ");
    scanf("%d", &c);

    printf("Enter 4th integer : ");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("%d is the greatest.", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d is the greatest.", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("%d is the greatest.", c);
    }
    else
    {
        printf("%d is the greatest.", d);
    }

    return 0;
}