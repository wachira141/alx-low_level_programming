#include "variadic_functions.h"
/**
 * sum_them_all - func to sum
 * @n: number of params
 * Return: 0 success
 */
int sum_them_all(const unsigned int n, ...)
{
va_list a;
int i, sum;

if (n == 0)
	return (0);

va_start(a, n);

for (i = 0; i < n; i++)
	sum += va_arg(a, unsigned int);

va_end(a);
return (sum);
}
