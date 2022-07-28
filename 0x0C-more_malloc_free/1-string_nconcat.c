#include "main.h"
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
char *s;
int num, len, i, j;

if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

if (num >= (int) strlen(s2))
	num = strlen(s2);

len = strlen(s1) + num + 1;

s = malloc(sizeof(*s) * len);
if (!s)
	return (NULL);

for (i = 0; s1[i] != '\0'; i++)
	s[i] = s1[i];
for (j = 0; j < num; j++)
	s[i + j] = s2[j];
s[i + j] = '\0';
return (s);
}
