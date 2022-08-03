#include "3-calc.h"
/**
 * get_op_func - select operator
 * @s: operator
 * Return: return correct op
 */
int (*get_op_func(char *s))(int, int)
{
int i = 0;

op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};

while (i < 5)
{
if (s[0] == ops[i].op[0])
return (ops[i].f);
i++;
}
return (NULL);
}
