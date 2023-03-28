// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to
// check if all the three points fall on one straight line :

#include <stdio.h>

int main()
{
    double x1, y1, x2, y2, x3, y3;

    printf("Enter all the three coordinates of the three points : ");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

    double slope_1, slope_2;

    slope_1 = (y2 - y1) / (x2 - x1);

    slope_2 = (y3 - y2) / (x3 - x2);

    if (slope_1 == slope_2)
    {
        printf("All the three points fall on the same straight line.");
    }
    else
    {
        printf("All the three points does not fall on the same straight line.");
    }

    return 0;
}