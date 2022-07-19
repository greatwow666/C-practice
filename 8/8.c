#include <stdio.h>

#define STUDENTS 5
#define CLASSES 5


int main(void)
{
    int i, j, sum, max, min;
    int student_grade[STUDENTS][CLASSES] = {0};

    for (i = 0; i < STUDENTS; i++)
    {
        printf("Enter student %d five grades: ", i+1);
        for (j = 0; j < CLASSES; j++)
        {
            scanf("%d", &student_grade[i][j]);
        }
    }

    printf("The student sums is : ");
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
    
    printf("\nThe student average is : ");
    for (i = 0; i < STUDENTS; i++)
    {
        sum = 0;
        for (j = 0; j < CLASSES; j++)
        {
            sum = sum + student_grade[i][j];
            /* code */
        }
        printf("%f ", sum/1.0/CLASSES);
    }

    printf("\nThe classes average is : ");
    for (i = 0; i < CLASSES; i++)
    {
        sum = 0;
        for (j = 0; j < STUDENTS; j++)
        {
            sum = sum + student_grade[j][i];
            /* code */
        }
        printf("%f ", sum/1.0/CLASSES);
    }

    printf("\nThe max is : ");
    for (i = 0; i < CLASSES; i++)
    {
        max = 0;
        for (j = 0; j < STUDENTS; j++)
        {
            if (max < student_grade[j][i])
            {
                max = student_grade[j][i];
            }
        }
        printf("%d ", max);
    }
    printf("\nThe min is : ");
    for (i = 0; i < CLASSES; i++)
    {
        min = student_grade[0][i];
        for (j = 0; j < STUDENTS; j++)
        {
            if (min > student_grade[j][i])
            {
                min = student_grade[j][i];
            }
        }
        printf("%d ", min);
    }
    
    
    return 0;
}