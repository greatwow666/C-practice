#include <stdio.h>

int main(void)
{
     float number;
     float i = 0.0f;

     do
     {
          printf("Enter a number: ");
          scanf("%f", &number);
          if (number > i)
               i = number;
     } while (number > 0);
     
     printf("largest number is %f", i);
     return 0;
}