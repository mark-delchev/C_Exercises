#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if (x > 10)
    {
        printf("X is bigger than 10.\n");
        printf("New line");
    }
    else
    {
        printf("X is smaller than 10.");
    }
    return 0;
}