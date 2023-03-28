// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or
// at the origin, viz. (0, 0) :

#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the coordinates : ");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0)
    {
        printf("The point lies on the origin.");
    }
    else if (x == 0)
    {
        printf("The point lies on the y-axis.");
    }
    else if (y == 0)
    {
        printf("The point lies on the x-axis.");
    }
    else
    {
        printf("The point does not lie on x-axis, y-axis or at the origin.");
    }

    return 0;
}