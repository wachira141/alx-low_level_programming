#include "main.h"
/**
 * main - entry point
 * Return: Always return 0 (Success)
 */
int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
