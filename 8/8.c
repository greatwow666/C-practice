#include <stdio.h>

#define STUDENTS 5
#define CLASSES 5


int main(void)
{
    int i, j, sum;
    int student_grade[STUDENTS][CLASSES] = {0};

    for (i = 0; i < STUDENTS; i++)
    {
        printf("Enter student %d five grades: ", i+1);
        for (j = 0; j < CLASSES; j++)
        {
            scanf("%d", &student_grade[i][j]);
        }
    }

    printf("The student average is ");
    for (i = 0; i < STUDENTS; i++)
    {
        sum = 0;
        for (j = 0; j < CLASSES; j++)
        {
            sum = sum + student_grade[i][j];
            /* code */
        }
        printf("%d ", sum);
    }
    
    
    return 0;
}