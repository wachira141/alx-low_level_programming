#include "variadic_functions.h"
/**
 * sum_them_all - func to sum
 * @n: number of params
 * Return: 0 success
 */
int sum_them_all(const unsigned int n, ...)
{
va_list a;
int sum;
unsigned int i;

va_start(a, n);

for (i = 0, sum = 0; i < n; i++)
	sum += va_arg(a, int);

va_end(a);
return (sum);
}
