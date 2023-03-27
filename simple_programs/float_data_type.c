// A simple program to illustrate 'float data type' :

#include <stdio.h>

int main()
{
    float x = 5;
    float y = 2;
    float z = (x / y); // -> float, 5 / 2 -> 2 (integer)
    float num = 5 / 2;

    printf("%f\n%f\n%f\n%f\n", x, y, z, num);

    float a = 5;
    float b = 2;

    printf("%f\n", (a + b));
    printf("%f\n", (a - b));
    printf("%f\n", (a * b));
    printf("%f\n", (a / b));

    return 0;
}
