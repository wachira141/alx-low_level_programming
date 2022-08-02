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
long m;
int c;
long num;

num = n;

if (num < 0)
{
	num *= -1;
	putchar('-');
}
m = 1;
c = 1;

while (c)
{
	if (num / (m * 10) > 0)
		m *= 10;
	else
		c = 0;
}
while (num >= 0)
{
	if (m == 1)
	{
		putchar(num % 10 + '0');
		num = -1;
	}
	else
	{
		putchar((num / m % 10) + '0');
		m /= 10;
	}
}
}
