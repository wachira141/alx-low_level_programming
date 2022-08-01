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
	_putchar(i + '0');
	i++;
}
	_putchar('\n');
}
