#include <stdio.h>
#include <stdlib.h>
/**
 * print_diagonal - function to print dg line
 * @n: number of character
 * Description: can only use putchar to prnt
 */
void print_diagonal(int n)
{
int i, c;
c = 0;

while (n > 0)
{
	i = c;
	while (i > 0)
	{
		putchar(' ');
		i--;
	}
	putchar('\\');
	putchar('\n');
	c++;
	n--;

}
if (c < 1)
putchar('\n');
}
