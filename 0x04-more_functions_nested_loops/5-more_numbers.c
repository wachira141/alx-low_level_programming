#include <stdio.h>
#include <stdlib.h>
/**
 * more_numbers - func to print
 * Return: return value 
 */
void more_numbers(void)
{
int i = 0;

while (i < 10)
{
	int c = 0;

while (c < 15)
{
	if (c > 9)
		putchar(c / 10 + '0');

	putchar(c % 10 + '0');
	c++;
}
i++;
putchar('\n');
}
}
