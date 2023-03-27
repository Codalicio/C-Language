// A program to find the volume of a sphere :

#include <stdio.h>

int main()
{
    float pi = 3.1416;

    float r;
    printf("Enter radius : ");
    scanf("%f", &r);

    float volume = (4 * pi * r * r * r) / 3;
    printf("%f", volume);

    return 0;
}