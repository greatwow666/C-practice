#include <stdio.h>

int main(void)
{
    int i, d;
    printf("Enter a number: ");
    scanf("%d", &i);

    if (i >= 0 && i <= 9)
        d =1;
    else if (i >= 10 && i <= 99)
        d = 2;
    else if (i >= 100 && i <= 999)
        d = 3;
    else if (i >= 1000 && i <= 9999)
        d = 4;
    
    printf("The number %d has %d digits.", i, d);

    return 0;
}