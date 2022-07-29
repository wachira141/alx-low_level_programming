#include "main.h"
/**
 * _realloc - fn to reallocate memory block
 * @ptr: pointer to the memory prv allocated with a call to malloc
 * @old_size: prev memory allocated
 * @new_size: new mem block
 *
 * Return: return pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
		return(ptr);
	}
	if (new_size == old-size)
		return(ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
			return(ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return(NULL);
	}
	free(ptr);
		return(ptr);


}
