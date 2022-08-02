#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_number - Funtion to print an integer
 * @n: int type number
 * Description: can only use putchar
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	putchar((num % 10) + '0');
}
