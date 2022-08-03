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
int *temp;
int i;

if (size <= 0)
	return (-1);

for (i = 0; i < size; i++)
{
temp = cmp(array[i]);
if (*temp != 0)
	return (i);
if (*temp == 0)
	return (-1);
}
}
