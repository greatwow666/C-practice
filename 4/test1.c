#include <stdio.h>

int main(void)
{
    int a;
    int i = 1;
    a = i++-1;
    printf("%d\n", a);

    int j = 1;
    j++;
    printf("%d", j);

    return 0;
}