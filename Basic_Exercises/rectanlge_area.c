#include <stdio.h>
int main()
{
    int side_a;
    int side_b;
    scanf("%d", &side_a);
    scanf("%d", &side_b);
    int area = side_a * side_b;
    printf("Area %d.", area);
    return 0;
}