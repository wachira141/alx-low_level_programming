#include <stdio.h>
#include <stdlibh>
/**
 * print_line - func to print new line
 * @n: number of times
 * Return: return 0
 */
void print_line(int n)
{
int i = 0;

while (i <= n)
{
	putchar('_');
	i++;
}
putchar('\n');
}
