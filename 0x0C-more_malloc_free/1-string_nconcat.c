#include "main.h"

/**
 * string_nconcat - function to concat 2 characters
 * @s1: the first string
 * @s2: the second string
 * @n: the number of int
 *
 * Return: return pointer to newly alloc space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *newstr;
int i, j, len2;

if (S1 == NULL)
s1 = "";

if (s2 == NULL)
	s2 = "";

len2 = (unsigned int)_strlen(s1);
newstr = malloc((len2 + n + 1) * sizeof(char));
if (newstr == NULL)
	return (NULL);
for (i = 0, j = 0; i < (len2 + n); i++)
{
	if (i < len2)
		newstr[i] = s1[i];
	else
		newstr[i] = s2[j++];
}
newstr[i] = '\0';

return (newstr);
}
