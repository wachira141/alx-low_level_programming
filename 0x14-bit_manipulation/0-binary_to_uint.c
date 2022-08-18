#include "main.h"
/**
 * binary_to_uint - func to convert a binary to uns in
 * @b: pointer to string
 * Return: converted str or null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, power;
	int chars;

	if (b == NULL)
		return (0);

for (chars = 0; b[chars]; chars++)
	{
if (b[chars] != '0' && b[chars] != '1')
	return (0);
	};

for (power = 1, num = 0, chars--; chars >= 0; chars--, power *= 2)
	{
if (b[chars] == '1')
	num += power;
	};

return (num);
}
