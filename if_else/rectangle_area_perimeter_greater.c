// Take length and breadth of a rectangle as input,
// write a program to find whether the area of the rectangle is greater than its perimeter or not :

#include <stdio.h>

int main()
{
    int length, breadth, area, perimeter;

    printf("Enter the length of the rectangle : ");
    scanf("%d", &length);

    printf("Enter the breadth of the rectangle : ");
    scanf("%d", &breadth);

    area = (length * breadth);

    perimeter = (2 * (length + breadth));

    if (area == perimeter)
    {
        printf("Area and perimeter of the rectangle are equal.");
    }
    else
    {
        if (area > perimeter)
        {
            printf("The area of the rectangle is greater than its perimeter.");
        }
        else
        {
            printf("The perimeter of the rectangle is greater than its area.");
        }
    }

    return 0;
}