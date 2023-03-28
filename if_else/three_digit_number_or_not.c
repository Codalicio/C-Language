// Take a positive integer as an input and tell if it is a three digit number or not :

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a positive integer : ");
    scanf("%d", &num);

    if (num > 99 && num < 1000)
    {
        printf("The given number %d is a three digit number.", num);
    }
    else
    {
        printf("The given number %d is not a three digit number.", num);
    }

    return 0;
}