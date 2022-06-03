
/*逻辑运算符假如左操作数可以判定结果，则不会计算右操作数*/

#include <stdio.h>

int main(void)
{
    int i, j, k;
    i = 3;
    j = 4;
    k = 5;

    printf("%d\n", i < j || ++j < k);
    printf("%d %d %d\n", i, j, k);

    printf("%d\n", i < j && ++j < k);
    printf("%d %d %d", i, j, k);

    return 0;
}