#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d", &a);
    scanf("%d", &b);
    c = sqrt(a * a + b * b);
    printf("Hypotenuse is %d.", c);
    return 0;
}