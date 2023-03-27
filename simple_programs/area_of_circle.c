// A program to display/print the area of a circle with given radius :

#include <stdio.h>

int main()
{
    float pi = 3.1416;

    float radius;
    printf("Enter radius of the circle : ");
    scanf("%f", &radius);

    float area;
    area = (pi * radius * radius);

    printf("%f is the area of the circle, with radius %f.", area, radius);

    return 0;
}