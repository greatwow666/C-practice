#include <stdio.h>

int main(void)
{
    int n, i, demo;
    float e = 1.0f;
    printf("Enter a number : ");
    scanf("%d", &n);
    
    for (i = 1, demo = 1; i <= n; i++)
    {
        e = e + 1.0f/(demo = demo * i);
        /* code */
    }

    printf("the value of e is : %f", e);
    
    return 0;
}
