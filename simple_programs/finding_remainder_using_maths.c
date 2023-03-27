// Take two integers as an input, a and b : a > b, and find the remainder
// when a is divided by b, using mathematic formula :

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the value of a : ");
    scanf("%d", &a);

    printf("Enter the value of b : ");
    scanf("%d", &b);

    int q = (a / b);

    int remainder = a - (b * q);

    printf("%d is the remainder, when %d is divided by %d.", remainder, a, b);

    return 0;
}