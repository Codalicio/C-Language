// Take two integers as an input, a and b : a > b, and find the remainder
// when a is divided by b :

#include <stdio.h>

int main()
{
    int a, b, remainder;

    printf("Enter the value of a : ");
    scanf("%d", &a);

    printf("Enter the value of b : ");
    scanf("%d", &b);

    remainder = (a % b);

    printf("When %d is divided by %d, it leaves a remainder of %d.", a, b, remainder);

    return 0;
}