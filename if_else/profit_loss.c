// If cost price and selling price of an item are input through the keyboard,
// write a program to determine whether the seller has made profit or incurred loss.
// Also determine how much profit he made or loss he incurred.

#include <stdio.h>

int main()
{
    float cp, sp;

    printf("Enter cost price of an item : ");
    scanf("%f", &cp);

    printf("Enter selling price of an item : ");
    scanf("%f", &sp);

    if (sp == cp)
    {
        printf("The seller neither made a profit nor incurred a loss.");
    }
    else
    {
        if (sp > cp)
        {
            printf("The seller makes a profit of %f", (sp - cp));
        }
        else
        {
            printf("The seller incurred a loss of %f", (cp - sp));
        }
    }

    return 0;
}