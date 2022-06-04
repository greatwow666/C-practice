#include <stdio.h>

int main(void)
{
    int n1, n2, n3;
    int m1, m2, m3;
    printf("Enter 1 date: ");
    scanf("%d/%d/%d",&n1, &n2, &n3);
    printf("Enter 2 date: ");
    scanf("%d/%d/%d",&m1, &m2, &m3);

    if (n3 == m3)
    {
        if (n1 == m1)
        {
            if (n2 == m2)
            {
                printf("%.2d/%.2d/%.2d is equal than %.2d/%.2d/%.2d",n1,n2,n3,m1,m2,m3);
            }
            else if (n2 > m2)
            {
                printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d",m1,m2,m3,n1,n2,n3);
            }
            else
            {
                printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d",n1,n2,n3,m1,m2,m3);
            }
        }
        else if (n1 > m1)
        {
            printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d",m1,m2,m3,n1,n2,n3);
        }
        else
        {
            printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d",n1,n2,n3,m1,m2,m3);
        }
    }
    else if (n3 > m3)
    {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d",m1,m2,m3,n1,n2,n3);
    }
    else
    {
            printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d",n1,n2,n3,m1,m2,m3);
    }
    return 0;
}