#include<stdio.h>

int main(void)
{
    char a[3][3] = {0};
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", a[i][i]);
        /* code */
    }
    
    return 0;
}