#include  <stdio.h>

int main(void)
{
    int a, b, c, d, f;
    printf("Enter ISBN: ");
    scanf("%d -%d-%d-%d-%d", &a, &b, &c, &d, &f);

    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d",
    a, b, c, d, f);

    return 0;
}