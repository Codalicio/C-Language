// Take a positive integer as an input and tell if it is divisible by 5 or 3 :

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a positive integer : ");
    scanf("%d", &n);

    if (n % 3 == 0 || n % 5 == 0)
    {
        printf("The number %d is either divisible by 5 or 3.", n);
    }
    else
    {
        printf("The number %d is neither divisible by 5 nor 3.", n);
    }

    return 0;
}