#include <stdio.h>
#include "main.h"
/**
 *main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result = 0;
if (argc == 3)
{
result  = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
