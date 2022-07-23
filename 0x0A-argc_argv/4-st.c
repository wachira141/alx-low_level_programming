#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int number = 0;
if (argc == 0)
{
printf("0\n");
}

for (int i = 1; i < argc; i++)
{
if (atoi(argv[i]))
{
	number += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", number);
return (0);
}
