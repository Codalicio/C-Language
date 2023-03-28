// Take the percentage of a student as an input and print the grade according to percentage :

#include <stdio.h>

int main()
{
    float percentage;
    printf("Enter your overall percentage : ");
    scanf("%f", &percentage);

    if (percentage > 90)
    {
        printf("A grade.");
    }
    else if (percentage > 80)
    {
        printf("B grade.");
    }
    else if (percentage > 70)
    {
        printf("C grade.");
    }
    else if (percentage > 60)
    {
        printf("D grade.");
    }
    else if (percentage > 50)
    {
        printf("E grade.");
    }
    else if (percentage >= 40)
    {
        printf("F grade.");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}