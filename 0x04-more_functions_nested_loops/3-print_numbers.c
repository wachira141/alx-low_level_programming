#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - fn to print nmbers
 * Return: return 0
 */
void print_numbers(void)
{
int i = 0;

while (i < 10)
{
	putchar(i + '0');
	i++;
}
	putchar('\n');
}
