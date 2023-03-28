// If the ages of ram, shyam and ajay are input through the keyboard,
// write a program to determine the youngest of the three :

#include <stdio.h>

int main()
{
    int ram, shyam, ajay;

    printf("Enter Ram's age : ");
    scanf("%d", &ram);

    printf("Enter Shyam's age : ");
    scanf("%d", &shyam);

    printf("Enter Ajay's age : ");
    scanf("%d", &ajay);

    if (ram < shyam)
    {
        if (ram < ajay)
        {
            printf("Ram is the youngest.");
        }
        else
        {
            printf("Ajay is the youngest.");
        }
    }
    else
    {
        if (shyam < ajay)
        {
            printf("Shyam is the youngest.");
        }
        else
        {
            printf("Ajay is the youngest.");
        }
    }

    return 0;
}