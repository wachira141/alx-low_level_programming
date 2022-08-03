#include "function_pointers.h"
/**
 * array_iterator - func to iterate
 * @array: the arr passed as param
 * @size: size of the array
 * @action: pointer to func to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && size != NULL && action != NULL)
for (i = 0; i < size; i++)
{
	action(*(array++));
}
}
