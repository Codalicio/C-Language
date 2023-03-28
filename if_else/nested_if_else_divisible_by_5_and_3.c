// Take a positive integer as an input and tell if it is divisible by 5 and 3 :

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    if (n % 5 == 0)
    {
        if (n % 3 == 0)
        {
            printf("The number %d is divisible by both 5 and 3.", n);
        }
        else
        {
            printf("The number %d is not divisible by 5 and 3 both.", n);
        }
    }
    else
    {
        printf("The number %d is not divisible by 5 and 3 both.", n);
    }

    return 0;
}