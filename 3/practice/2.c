#include <stdio.h>

int main(void)
{
    int item, month, day, year;
    float price;

    printf("Enter item munber:");
    scanf("%d", &item);

    printf("Enter unit price:");
    scanf("%f", &price);

    printf("Enter purchase data (mm/dd/yyyy):");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit Price\tPurchase Date\t\n%-d\t%6.2f\t%.2d%.2d%.4d\t", item, price, month, day, year);
    return 0;


}