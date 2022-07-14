#include <stdio.h>
#include <stdbool.h>

#define N 10

int main(void)
{
    bool digit_seen[N] = {false}, repeat[N] = {false};
    long n;
    int digit, i;

    printf("Enter a number:");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        if(digit_seen[digit])
            repeat[digit] = true;
        else
            digit_seen[digit] = true;
        n = n / 10;
    }
    

    printf("Repeated digits: ");
    for (i = 0; i < 10 ; i++)
    {
        if(repeat[i])
            printf("%d, ", i);
        /* code */
    }
    
    return 0;
}