#include "main.h"
/**
 * set_bit - func to set value
 * @n: value
 * @index: index starting with 0
 * Return: 1 or 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int num;

if (index > 64)
	return (-1);

for (num = 1; index > 0; index--, num *= 2)
	;
*n += num;

return (1);
}
