#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: the argument count
 * @argv:  argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int cents, remainder, coins;
	int pennies, twos, dimes, nickles, quarters;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
cents = atoi(argv[1]);
				if (cents <= 0)
				{
				printf("0\n");
				return (0);
				}
				pennies = cents / 25;
				remainder = cents % 25;
				twos = remainder / 10;
				remainder = remainder % 10;
				dimes = remainder / 5;
				remainder = remainder % 5;
				nickles = remainder / 2;
				remainder = remainder % 2;
				quarters = remainder / 1;
				coins = pennies + twos + dimes + nickles + quarters;
				printf("%d\n", coins);

	return (0);
}
