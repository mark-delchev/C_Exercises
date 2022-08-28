#include <stdio.h>
int main()
{
    int points;
    double bonus, plus_bonus, total_bonus, final_points;
    scanf("%d", &points);
    if (points <= 100)
    {
        bonus = 5.0;
    }
    else if (points > 1000)
    {
        bonus = points * 0.1;
    }
    else 
    {
        bonus = points * 0.2;
    }
    if (points % 2 == 0)
    {
        plus_bonus = 1;
    }
    else if (points % 10 == 5)
    {
        plus_bonus = 2;
    }
    total_bonus = bonus + plus_bonus;
    final_points = points + total_bonus;
    printf("%lf\n", total_bonus);
    printf("%lf\n", final_points);
    return 0;
}