#include <stdio.h>

int main(void)
{
    int v;
    printf("Enter the wind speed: ");
    scanf("%d", &v);

    if (v >= 0 && v < 1)
        printf("Calm");
    else if (v <= 3)
        printf("Lighr air");
    else if (v <= 27)
        printf("Breeze");
    else if (v <= 27)
        printf("Breeze");
    else if (v <= 47)
        printf("Gale");
    else if (v <= 63)
        printf("Storm");
    else if (v > 63)
        printf("Hurricane");

    return 0;
}