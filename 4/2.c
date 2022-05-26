#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    printf("%d%d%d", number%10, (number/10)%10, number/100);

    return 0;
}