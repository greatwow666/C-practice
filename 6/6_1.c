#include <stdio.h>

int main(void)
{
    int n, r;
    printf("Enter a number : ");
    scanf("%d", &n);
    for ( r = 2; n >= r*r ; r+=2)
    {
        printf("%d\n", r*r);
    }
    
    
    return 0;
}