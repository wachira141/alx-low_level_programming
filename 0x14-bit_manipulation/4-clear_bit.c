#include "main.h"
/**
 * clear_bit - func to set bit to 0
 * @n: pointer to dec num to change
 * @index: index position
 * Return: 1 or 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int num;
unsigned int hold;

if (index > 64)
	return (-1);
hold = index;
for (num = 1; hold > 0; num *= 2, hold--)
	;

if ((*n >> index) & 1)
	*n -= num;

return (1);
}
