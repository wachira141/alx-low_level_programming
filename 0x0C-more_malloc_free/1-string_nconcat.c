#include <main.h>
/**
 * string_nconcat - concatinate 2 strings
 * @s1: the string to concat
 * @s2: string 2
 * @n: number of bytes
 *
 * Return: null if it fails else pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len = 0, m = 0, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len] != '\0')
	{
		len++;
	}

	while (s2[m] != '\0')
	{
		m++;
	}

	if (n > m)
	{
		return (NULL);
	}

	for (k = 0; k < len; k++)
	{
		str[k] = s1[k];
	}

	for (k = 0; k < (len + n); k++)
	{
		str[k] = s2[k - len];
	}
	str[k] = '\0';

	return (str);
}
