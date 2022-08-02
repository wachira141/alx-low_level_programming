#include <stdio.h>
#include <stdlib.h>
/**
 * print_square - print a square
 * @size: size of square
 * Description: only use putchar once
 */
void print_square(int size)
{
	int x, y;

	y = 0;

	if (size < 1)
		putchar('\n');

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			putchar('#');
			x++;
		}
		putchar('\n');
		y++;
	}
}
