#include <stdio.h>

int main(void)
{
    float number;
    float i;

    printf("Enter a number: ");
    scanf("%f", &number);
    i = number;
     
    while (1)
    {
        printf("Enter a number: ");
        scanf("%f", &number);

        if (number <= 0)
            break;

        if (number < i)
            i = number;       
    }
    
     
     printf("min number is %f", i);
     return 0;
}