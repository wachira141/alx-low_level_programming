#include "3-calc.h"
/**
 * op_add - add func
 * @a: int 1
 * @b: int 2
 * Return: return sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - subtraction func
 * @a: int 1
 * @b: int 2
 * Return: return sub of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiplication func
 * @a: int 1
 * @b: int 2
 * Return: return multiple of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - division func
 * @a: int 1
 * @b: int 2
 * Return: divion of a by 2
 */
int op_div(int a, int b)
{
if (b == 0)
{
	printf("Error\n");
	exit(100);
}
return (a / b);
}

/**
 * op_mod - module func
 * @a: int 1
 * @b: int 2
 * Return: return module of a by b
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
