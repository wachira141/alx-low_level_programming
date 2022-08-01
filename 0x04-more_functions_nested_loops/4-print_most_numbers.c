#include <stdio.h>
#include <stdlib.h>
/**
 * print_most_numbers - function to print nums
 * Return: return value
 */
void print_most_numbers(void)
{
int i = 0;

while (i <= 9)
{
	if (i == 2 || i == 4)
		continue;
	putchar(i + '0');
	i++;
}
putchar('\n');
}
