// A program to find out the percentage of 4 subjects where marks are out of 40 :

#include <stdio.h>

int main() {
    float maths, physics, chemistry, english;

    printf("Marks obtained in maths : ");
    scanf("%f", &maths);

    printf("Marks obtained in physics : ");
    scanf("%f", &physics);

    printf("Marks obtained in chemistry : ");
    scanf("%f", &chemistry);

    printf("Marks obtained in maths : ");
    scanf("%f", &english);

    float number_of_subjects = 4;

    float max_marks_per_subject = 40;

    float total_marks_of_all = (max_marks_per_subject * number_of_subjects);

    float percentage = ((maths + physics + chemistry + english) / (total_marks_of_all / 100));

    printf("Your overall percentage is %f.", percentage);

    return 0;
}