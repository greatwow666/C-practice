#include <stdio.h>

#define ROW 5
#define COLUM 5

int main(void)
{
    int i, j, sum, digit_seen[ROW][COLUM] = {0};

    for (i = 0; i < ROW; i++)
    {
        printf("Enter row%d : ", i+1);
        for (j = 0; j < COLUM; j++)
        {
            scanf("%d", &digit_seen[i][j]);
        }
    }
    
    printf("Row totals: ");
    for (i = 0; i < ROW; i++)
    {
        sum = 0;
        for (j = 0; j < COLUM; j++)
        {
            sum = sum+digit_seen[i][j];
        }
        printf("%d ", sum);
    }

    printf("\nColumn totals: ");
    for (i = 0; i < COLUM; i++)
    {
        sum = 0;
        for (j = 0; j < ROW; j++)
        {
            sum = sum + digit_seen[j][i];
        }
        printf("%d ", sum);
    }
    return 0;

}