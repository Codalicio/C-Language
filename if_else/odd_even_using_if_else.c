// Take a integer as an input and tell if it is even or odd :

#include <stdio.h>

int main()
{
    int x;
    printf("Enter an integer : ");
    scanf("%d", &x);

    if (x % 2 == 0)
    {
        if (x == 0)
        {
            printf("%d is neither even nor odd.", x);
        }
        else
        {
            printf("%d is an even number.", x);
        }
    }
    else
    {
        printf("%d is an odd number.", x);
    }

    return 0;
}