// If the ages of ram, shyam and ajay are input through the keyboard,
// write a program to determine the youngest of the three :

#include <stdio.h>

int main()
{
    int Ram, Shyam, Ajay;

    printf("Enter Ram's age : ");
    scanf("%d", &Ram);

    printf("Enter Shyam's age : ");
    scanf("%d", &Shyam);

    printf("Enter Ajay's age : ");
    scanf("%d", &Ajay);

    if (Ram < Shyam && Ram < Ajay)
    {
        printf("Ram is the youngest.");
    }
    else if (Shyam < Ram && Shyam < Ajay)
    {
        printf("Shyam is the youngest.");
    }
    else
    {
        printf("Ajay is the youngest.");
    }

    return 0;
}