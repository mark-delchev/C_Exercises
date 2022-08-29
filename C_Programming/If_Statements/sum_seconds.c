#include <stdio.h>
int main()
{
    int first, second, third, seconds_sum, minutes, seconds;
    scanf("%d", &first);
    scanf("%d", &second);
    scanf("%d", &third);
    seconds_sum = first + second + third;
    seconds = seconds_sum % 60;
    minutes = seconds_sum / 60;
    if (seconds < 10)
    {
        printf("%d", minutes);
        printf(":0");
        printf("%d", seconds);
    }
    else
    {
        printf("%d", minutes);
        printf(":");
        printf("%d", seconds);
    }
    return 0;
}