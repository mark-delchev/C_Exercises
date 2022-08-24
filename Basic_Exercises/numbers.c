#include <stdio.h>
int main()
{
    int num1;
    int num2;
    printf("First number: ");
    scanf("%d", &num1);
    printf("Second number: ");
    scanf("%d", &num2);
    int num3 = num1 + num2;
    printf("The first number plus the second is equal to: %d", num3);
    return 0;
}