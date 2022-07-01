#include <stdio.h>
/**
* main - Program entry point
*
* Return: 0 indicates success
*/
int main(void)
{
int num, i, j, k;
for (num = 0; num < 10; num++)
{
for (i = 0; i < 10; i++)
{
for (j = num; j < 9; j++)
{
for (k = i + 1; k < 10; k++)
{
putchar(num + '0');
putchar(i + '0');
putchar(' ');
putchar(j + '0');
putchar(k + '0');
if (num == 9 && i == 8 && j == 9 && k == 9)
break;
putchar(',');
putchar(' ');
}
k = 0;
}
}
}
putchar('\n');
return (0);
}
