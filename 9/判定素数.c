#include <stdbool.h>
#include <stdio.h>

bool is_prime(int n)
{
    int p;

    if (n <= 1)
        return false;
    for (p = 2; p*p <= n; p++)
        if (n % p == 0)
            return false;
    return true;
}

int main(void)
{
    int n;

    printf("Please Enter a number: ");
    scanf("%d", &n);

    if (is_prime(n))
        printf("Prime!");
    else
    printf("Not Prime!");
    
    return 0;
}