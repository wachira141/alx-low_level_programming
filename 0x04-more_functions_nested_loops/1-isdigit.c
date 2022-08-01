#include <stdio.h>
/**
 * _isdigit - entry function
 * @c: value passed
 *
 * Return: return 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}
