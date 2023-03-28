// Take an alphabet character as an input and tell whether it is a vowel or
// a consonant :

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter an alphabet : ");
    scanf("%c", &ch);

    char lowercase = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    char uppercase = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    if (lowercase || uppercase)
    {
        printf("%c is a vowel.", ch);
    }
    else
    {
        printf("%c is a consonant.", ch);
    }
    
    return 0;
}