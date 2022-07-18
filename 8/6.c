#include <stdio.h>
#include <ctype.h>

#define SIZE 100

int main(void)
{
    char ch, message_seen[SIZE] = {0};
    int i = 0;

    printf("Enter a message: ");
    while((ch = getchar()) != '\n' && i < SIZE)
        message_seen[i++] = ch;
    
    printf("In B1FF-speak: ");

    for (i = 0; i < SIZE; i++)
    {
        switch (ch = toupper(message_seen[i]))
        {
        case 'A': putchar('4');
            break;
        case 'B': putchar('8');
            break;
        case 'E': putchar('3');
            break;
        case 'I': putchar('1');
            break;
        case 'O': putchar('0');
            break;
        case 'S': putchar('5');
            break;
        default:putchar(ch);
            break;
        }
    }
    printf("!!!!!!!!!!!!!!!!");
    
    return 0;
    

}