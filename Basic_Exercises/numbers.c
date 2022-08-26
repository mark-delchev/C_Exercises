#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("\nFirst number: ");
    scanf("%d", &num1);
    printf("\nSecond number: ");
    scanf("%d", &num2);
    num3 = num1 + num2;
    printf("\nThe first number plus the second is equal to: %d", num3);
    return 0;
}