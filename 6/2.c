/*求两数最大公约数*/

#include <stdio.h>

int main(void)
{
    int m, n;
    printf("Enter two number: ");
    scanf("%d %d", &m, &n);

    while (n != 0)
    {
        int r;
        r = m%n;
        m = n;
        n = r;
    }

    printf("%d", m);

    return 0;
    

}