#include "main.h"
#include <ctype.h>
/**
 * main - main entry point
 * @argc: the first number to be pased as argumen
 * @argv: the second number to be passed as argument
 * Return: Always return 0 (Success)
 */
int main(int argc, char *argv[])
{
unsigned long val1, val2, strl1, strl2, n;
char *letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *findletter, *findletter2;

	if (argc != 3)
	{
		puts("Error");
		exit(98);
	}
strl1 = strlen(argv[1]);
strl2 = strlen(argv[2]);

for (val1 = 0; val1 < strl1; val1++)
{
	findletter = strchr(letters, argv[1][val1]);
	if (findletter)
	{
		puts("Error");
		exit(98);
	}

}
for (val2 = 0; val2 < strl2; val2++)
{
	findletter2 = strchr(letters, argv[2][val2]);
	if (findletter2)
	{
		puts("Error");
		exit(98);
	}
}
n = strtol(argv[1], NULL, 10) * strtol(argv[2], NULL, 10);
printf("%lu\n", n);
return (0);
}
