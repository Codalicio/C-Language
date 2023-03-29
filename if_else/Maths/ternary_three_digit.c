// Take a positive integer as an input and determine whether it is a three digit
// number or not (using ternary operator) :

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a positive integer : ");
    scanf("%d", &num);

    (num > 99 && num < 1000) ? printf("The number %d is a three digit number.", num) : printf("The number %d is not a three digit number.", num);

    return 0;
}