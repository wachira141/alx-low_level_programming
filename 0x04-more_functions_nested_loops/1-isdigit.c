#include <stdio.h>
/**
 * _isdigit - entry function
 * @c: value passed
 *
 * Return: return 0 otherwise
 */
int _isdigit(int c)
{
	if ( c >= 0 || c < 9)
		return (1);
	return (0);
}
