#include "3-calc.h"
/**
 * main - Entry point
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 Sucess
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	int (*chossenfunc)(int, int);

if (argc != 4)
{
	printf("Error\n");
	exit(98);
}

if (argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}

chossenfunc = get_op_func(argv[2]);

if (chossenfunc == NULL)
{
printf("Error\n");
exit(99);
}
printf("%d\n", chossenfunc(a, b));
return (0);
}
