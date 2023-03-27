// Take a positive integer and tell if it is even or add,
// using if, else if, and else :

#include <stdio.h>

int main()
{
    int a;
    printf("Enter an integer : ");
    scanf("%d", &a);

    if (a == 0)
    {
        printf("It is neither even nor odd!");
    }
    else if (a % 2 == 0)
    {
        printf("%d is an even number.", a);
    }
    else
    {
        printf("%d is a odd number.", a);
    }

    return 0;
}