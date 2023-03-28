// Take a positive integer as an input and tell if it is divisible by 5 or 3
// but not divisible by 15 (using logical operators) :

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a positive integer : ");
    scanf("%d", &num);

    if ((num % 5 == 0 || num % 3 == 0) && num % 15 != 0)
    {
        printf("The number %d is divisible by 5 or 3 but not divisible by 15.", num);
    }
    else
    {
        printf("The number %d is either not divisible by 5 or 3 or divisible by 15.", num);
    }

    return 0;
}