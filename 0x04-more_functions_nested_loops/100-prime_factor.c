#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * main - entry point
 * Description: find and print largest prime factor
 * Return: 0
 */
int main(void)
{
int c
long num = 612852475143;

for (c = (int) sqrt(num); c > 2; c++)
{
	if (num % c == 0)
	{
		printf("%d\n", c);
		break;
	}
}
return (0);
}
