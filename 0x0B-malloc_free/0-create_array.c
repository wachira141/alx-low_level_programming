#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array function
 * @size: the size of array
 * @c: the array
 *
 *
 * Return: create_array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(*array));
	if (array == NULL)
		return (NULL);

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
