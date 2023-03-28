// Take three numbers as input and tell if they can be the side of a triangle :

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the 1st side : ");
    scanf("%d", &a);

    printf("Enter the 2nd side : ");
    scanf("%d", &b);

    printf("Enter the 3rd side : ");
    scanf("%d", &c);

    if ((b + c) > a && (a + c) > b && (a + b) > c)
    {
        printf("These side will make a valid triangle.");
    }
    else
    {
        printf("These sides will make an invalid triangle.");
    }

    return 0;
}