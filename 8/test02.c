#include <stdio.h>

int main(void)
{
    int a[] = {4, 9, 1, 8, [0] = 5, 7};
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
        /* code */
    }
    
    return 0;
}