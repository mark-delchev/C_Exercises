#include <stdio.h>
#include <stdbool.h>
int main()
{
    int num = 1234;
    long long numm = 9223372036854775807;  // %lld to display
    char f = 120; // %d to display and %c ASCII
    unsigned long long num3 = 18446744073709551615U; // %llu to display
    unsigned int num2 = 123333; // %u to sidplay
    short short_num = 12333; // %d to display
    unsigned short i = 1; // %d to displat
    char name[] = "Ivan";// %s to display
    char letter = 'B';// %c to display
    float grade = 2.5; // %f to display
    double grade2 = 2.5; // more accurate than float %lf to display
    bool e = true;
    printf("%s%c, your grade is: %8.2f\n", name, letter, grade); // use %.x to determine the number of digits displayed, %y.x y is for field width
    printf("%llu", num3);
    return 0;
}