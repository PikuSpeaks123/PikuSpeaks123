#include <stdio.h>
#include <conio.h>
void main()
{
    unsigned long dec;
    int a[25], c = 0, i;
    printf("\nENTER A DECIMAL NUMBER: ");
    scanf("%lu", &dec);
    printf("\n%lu IN HEXADECIMAL FORMAT: ", dec);
    while (dec > 0)
    {
        a[c] = dec % 16;
        dec = dec / 16;
        c++;
    }
    for (i = c - 1; i >= 0; i--)
    {
        if (a[i] >= 10)
        {
            printf("%c", a[i] + 55);
        }
        else
        {
            printf("%d", a[i]);
        }
    }
    getch();
}