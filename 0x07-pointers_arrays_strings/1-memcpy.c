#include "main.h"
#include <stdio.h>

/**
 * _memcpy - append n bytes of memory with a constant value
 * @dest: destination memory area
 *  @src: source memory area
 *  @n: bytes from
 *  Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i)  = *(src + i);
		return (dest);
	}
