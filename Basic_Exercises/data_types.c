#include <stdio.h>
#include <stdbool.h>
int main()
{
    int num = 1234;
    long long numm = 9223372036854775807;  // %lld to display
    char f = 120; // %d to display and %c ASCII
    unsigned long long num3 = 18446744073709551615U; // %llu to display
    unsigned int num2 = 123333; // %u to sidplay
    char name[] = "Ivan";// %s to display
    char letter = 'B';// %c to display
    float grade = 2.5; // %f to display
    double grade2 = 2.5; // more accurate than float %lf to display
    bool e = true;
    printf("%s%c, your grade is: %0.2f\n", name, letter, grade); // use 0.x to determine the number of digits displayed
    printf("%llu", num3);
    return 0;
}