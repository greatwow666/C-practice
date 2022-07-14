#include <stdio.h>

#define N 10

int main(void)
{
    int i, digit, digit_seen[N] = {0};
    long n;

    printf("Enter a number : ");
    scanf("%ld", &n);

    do
    {
        while (n > 0)
        {
            digit = n % 10;
            digit_seen[digit] = digit_seen[digit] + 1;
            n = n / 10;
            /* code */
        }
        printf("Digit:      ");
        for(i = 0; i < 10; i++)
        {
            printf("%d  ", i);
            /* code */
            }
        printf("\nOccurrence: ");
        for (i = 0; i < 10; i++)
        {
            printf("%d  ", digit_seen[i]);
            digit_seen[i] = 0;
            /* code */
        }
        printf("\nEnter a number : ");
        scanf("%ld", &n);
        /* code */
    } while (n > 0);
    return 0;
}