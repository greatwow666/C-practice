#include <stdio.h>

int main(void)
{
    int a;
    printf("Enter numerical grade: ");
    scanf("%d", &a);
    
    if (a > 100 || a < 0)
        printf("Error");
    else
        switch (a/10)
        {
        case 0: case 1: case 2: case 3: case 4: case 5: 
            printf("Letter grade : F");
            break;
        case 6:
            printf("Letter grade : D");
            break;
        case 7:
            printf("Letter grade : C");
            break;
        case 8:
            printf("Letter grade : B");
            break;
        case 9: case 10:
            printf("Letter grade : A");
            break;
        }

    return 0;

}