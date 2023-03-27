// A program to find the percentage of 5 subjects :

#include <stdio.h>

int main()
{
    float maths, physics, chemistry, english, economics;
    
    printf("Enter math's marks : ");
    scanf("%f", &maths);

    printf("Enter physics's marks : ");
    scanf("%f", &physics);

    printf("Enter chemistry's marks : ");
    scanf("%f", &chemistry);

    printf("Enter english's marks : ");
    scanf("%f", &english);

    printf("Enter economics's marks : ");
    scanf("%f", &economics);

    float percentage = ((maths + physics + chemistry + english + economics) / 5);

    printf("The overall percentage of all the 5 subjects is %f.", percentage);

    return 0;
}