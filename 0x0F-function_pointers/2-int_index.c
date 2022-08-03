#include "function_pointers.h"
/**
 * int_index - func to search integer
 * @array: array passed
 * @size: number of elem in array
 * @cmp: pointer to the func
 * Return: no elem, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size < 1 || array == NULL || cmp == NULL)
	return (-1);

for (i = 0; i < size; i++)
{
	if (cmp(array[i]))
		return (i);
}
return (-1);
}
