#include <stdio.h>

int main(void)
{
    int n, r = 2;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (n >= r*r)
    {
        printf("%d\n", r*r);
        r += 2;
    }
    
    return 0;
}