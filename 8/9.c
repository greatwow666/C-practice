#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define LENGTH 20
#define WIDTH 20


int main(void)
{
    char c = 'A';
    char n[LENGTH][WIDTH] = {0};
    int i = 0;
    int j = 0; 
    int up, down, right, left, move;

    n[i][j] = c++;
    srand((unsigned) time(NULL));

    while (c <= 'Z')
    {
        up = down = right = left = move = 0;

        if (i-1 >= 0 && n[i-1][j] == 0)
            up = 1;
        if (i+1 < WIDTH && n[i+1][j] == 0)
            down = 1;
        if (j+1 < LENGTH && n[i][j+1] == 0)
            right = 1;
        if (j-1 >= 0 && n[i][j-1] == 0)
            left = 1;
        
        if (up + down + right + left == 0){
            printf("NO WAY!!!\n\n");
            break;
        }
        
        move = rand() % 4;

        switch (move)
        {
        case 0:
            if (up){
            n[--i][j] = c;
            ++c;
            break;
            }
        case 1:
            if (down){
            n[++i][j] = c;
            ++c;
            break;
            }
        case 2:
            if (right){
            n[i][++j] = c;
            ++c;
            break;
            }
        case 3:
            if (left){
            n[i][--j] = c;
            ++c;
            break;
            }
        default:
            break;
        }
    }

    for ( i = 0; i < WIDTH; i++)
    {
        for (j = 0; j < LENGTH; j++)
        {
            if (n[i][j] == 0)
                n[i][j] = '.';
            printf("%c ", n[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}