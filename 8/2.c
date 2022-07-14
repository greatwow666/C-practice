#include<stdio.h>
#include<stdbool.h>

#define N 10

int main(void)
{
    int occurrence[N] = {0};
    int digit, i;
    long n;

    printf("Enter a number : ");
    scanf("%ld", &n);

    while(n > 0)
    {
        digit = n % 10;
        occurrence[digit] = occurrence[digit] + 1;
        n = n / 10;
    }

    printf("Digit:      ");
    for(i = 0; i < 10; i++)
    {
        printf("%d  ", i);
        /* code */
    }
    printf("\n");
    printf("Occurrence: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d  ", occurrence[i]);
        /* code */
    }

    return 0;
}