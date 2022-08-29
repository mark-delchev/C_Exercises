#include <stdio.h>
int main()
{
    char name[60];
    char family_name[60];
    printf("What is your full name? ");
    scanf("%s", name);
    scanf("%s", family_name);
    printf("Hello %s %s!", name, family_name);
    return 0;
}