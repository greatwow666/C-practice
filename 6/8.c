/*打印日历*/

#include <stdio.h>

int main(void)
{
    int days, week;
    printf("Enter days of month: ");
    scanf("%d", &days);
    printf("Enter first day is : ");
    scanf("%d", &week);
    for (int i = 1, day = 1; i <= week+days-1; i++)
    {
        if (i < week)
        {
            printf("   ");
        }
        else
        {
            printf("%3d", day++);
        }
        if (i%7 == 0)
        {
            printf("\n");
            /* code */
        }    
    }

    return 0;
}