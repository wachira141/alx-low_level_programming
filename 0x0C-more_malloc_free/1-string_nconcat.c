#include "main.h"

/**
 * string_nconcat - function to concat 2 characters
 * @s1: the first string
 * @s2: the second string
 *@n: the number of int
 * Return: return pointer to newly alloc space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *newstr;
int i, j, len2;

len2 = n;
if (!s1)
s1 = "";
if (!s2)
	s2 = "";

if (n >= (int) strlen(s2))
	len2 = strlen(s2);

	newstr = malloc(sizeof(char) * (strlen(s1) + len2 + 1));
if (!newstr)
	return (NULL);

for (i = 0; i <= s1[i] != '\0'; i++)
	newstr[i] = s1[i];

for (j = 0; j <= len2; j++)
	newstr[i + j] = s2[j];

newstr[i + j] = '\0';
return (newstr);
}
