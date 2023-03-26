// A program to declare a variable and use it in the program, also updating
// the variable :

#include <stdio.h>

int main()
{
    int x;
    x = 7;
    printf("%d\n", x);

    x = 9;
    printf("%d\n", x);

    x = 200;
    printf("%d\n", x);

    x += 50;
    printf("%d\n", x);

    x -= 70;
    printf("%d\n", x);

    int a;
    a = 5;
    printf("%d", a);

    a = 7;
    printf("%d", a);

    a = (a + 6);
    printf("%d", a);

    a = (a - 20);
    printf("%d", a);

    return 0;
}