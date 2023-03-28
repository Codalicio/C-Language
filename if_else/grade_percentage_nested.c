// Take the percentage of a student as an input and print the grade according
// to the percentage (using nested 'if else') :

#include <stdio.h>

int main()
{
    float p;
    printf("Enter your percentage : ");
    scanf("%f", &p);

    if (p > 90)
    {
        printf("A grade");
    }
    else
    {
        if (p > 80)
        {
            printf("B grade");
        }
        else
        {
            if (p > 70)
            {
                printf("C grade");
            }
            else
            {
                if (p > 60)
                {
                    printf("D grade");
                }
                else
                {
                    if (p > 50)
                    {
                        printf("E grade");
                    }
                    else
                    {
                        if (p >= 40)
                        {
                            printf("F grade");
                        }
                        else
                        {
                            printf("Fail");
                        }
                    }
                }
            }
        }
    }

    return 0;
}