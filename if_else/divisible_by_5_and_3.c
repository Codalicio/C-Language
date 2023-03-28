// Take a positive integer as an input and tell if it is divisible by 5 and 3 both :

#include <stdio.h>

int main()
{
    int x;
    printf("Enter a positive integer : ");
    scanf("%d", &x);

    if (x % 3 == 0 && x % 5 == 0)
    {
        printf("The number %d is divisible by both 5 and 3.", x);
    }
    else
    {
        printf("The number %d is not divisible by 5 and 3.", x);
    }

    return 0;
}