#include <stdio.h>

int main(void)
{
    int m, n, a, b;
    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

    a = m;
    b = n;
    while (b != 0)
    {
        int r;
        r = a%b;
        a = b;
        b = r;
    }

    printf("In lowest terms: %d/%d ", m/a, n/a);

    return 0;
    

}