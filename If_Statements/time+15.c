#include <stdio.h>
int main()
{
    int hours, minutes, time, time15, hours15, minutes15;
    scanf("%d", &hours);
    scanf("%d", &minutes);
    time = minutes + (hours * 60);
    time15 = time + 15;
    hours15 = time15 / 60;
    minutes15 = time15 % 60;
    if (hours15 == 24)
    {
        hours15 = 0;
    }
    if (minutes15 < 10)
    {
        printf("%d:0%d", hours15, minutes15);
    }
    else
    {
        printf("%d:%d", hours15, minutes15);
    }
    return 0;
}