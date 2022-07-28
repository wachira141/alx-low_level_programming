#include "main.h"
/**
 * _calloc - fn to allocate mem to arrar
 * @nmemb: array
 * @size: the size to be allocated in bytes
 *
 * Return: return a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i, *mem;

if (nmemb <= 0 || size <= 0)
	return (NULL);

mem = malloc(nmemb * size);
if (!mem)
	return (NULL);

for (i = 0; i < nmemb; i++)
mem[i] = 0;

return (mem);
}
