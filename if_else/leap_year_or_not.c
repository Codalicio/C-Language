// Take any year as an input and determine whether the year is a leap year or not.
// (Considering leap year occurs after every four(4) years.) :

#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d is not a leap year.", year);
    }

    return 0;
}