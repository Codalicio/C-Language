// A program to find the simple interest when principal, rate of interest and time are given :

#include <stdio.h>

int main()
{
    float principal, rate, time, si;

    printf("Enter the principal amount : ");
    scanf("%f", &principal);

    printf("Enter the rate of interest : ");
    scanf("%f", &rate);

    printf("Enter time in years : ");
    scanf("%f", &time);

    si = ((principal * rate * time) / 100);

    printf("%f is the simple interest on principal amount of %f with the rate of as %f percent in time %f years!", si, principal, rate, time);

    return 0;
}