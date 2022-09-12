#include <stdio.h>
#include <string.h>
int main()
{
    int result;
    char string[10];
    scanf("%s", string);
    result = strcmp(string, "paper");
    printf("%d", result);
    return 0;
}