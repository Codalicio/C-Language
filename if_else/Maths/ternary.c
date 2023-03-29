#include <stdio.h>

int main()
{
    int n;
    printf("Enter a positive integer : ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("%d is neither even nor odd.", n);
    }
    else
    {
        n % 2 == 0 ? printf("%d is an Even number.", n) : printf("%d is an Odd number.", n);
    }

    return 0;
}