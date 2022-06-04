#include <stdio.h>

int main(void)
{
    int number, n;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The reversal is : ");
    do
    {
        n = number%10;
        printf("%d", n);
        number = number/10;
        
    } while (number != 0);
    return 0;
    
}