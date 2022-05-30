#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);

    printf("In Octal, your number is : %1d%1d%1d%1d%1d", n/8/8/8/8%8, n/8/8/8%8, n/8/8%8, n/8%8, n%8);

    return 0;
}