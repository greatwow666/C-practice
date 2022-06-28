/*
显示一个表格，显示几年时间内100美元在不同利率下的价值，用户输入利率和要投资的年数。投资价值每年计算一次，
表格将显示输入利率和紧随其后的4个更高利率下投资的总价值。
*/

#include <stdio.h>

#define NUM_RATES ((int)(sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void)
{
    int i, low_rate, num_years, year;
    double value[5];

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of year:");
    scanf("%d", &num_years);

    printf("\nYears");
    for (i = 0; i < NUM_RATES; i++)
    {
        printf("%6d%%", low_rate+i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (year = 1; year <= num_years; year++)
    {
        printf("%3d    ", year);
        for (i = 0; i < NUM_RATES; i++)
        {
            value[i] = value[i] + (low_rate+i)/100.00 * value[i];
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }
    return 0;
}