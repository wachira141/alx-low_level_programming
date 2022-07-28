#include "main.h"
/**
 * array_range - fn to create an array
 * @min: min value to include
 * @max: max values to include
 *
 * Return: return null or the pointer to the array
 */
int *array_range(int min, int max)
{
int *newarray, i;

if (min > max)
	return (NULL);

newarray = malloc(sizeof(*newarray) * (max - min + 1));
if (newarray == NULL)
	return (NULL);
for (i = 0; min <= max; i++, min++)
	newarray[i] = min;

return (newarray);
}
