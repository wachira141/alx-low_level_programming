#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: return 0 success
 */
int main(void)
{
int i = 1;

while (i <= 100)
{
	if (i % 3 == 0 && i % 5 == 0)
		printf("FizzBuzz");
	else if (i % 3 == 0)
		printf("Fizz");

	else if (i % 5 == 0)
		printf("Buzz");

	else
		printf("%d", i);

	if (i != 100)
		printf(" ");
	i++;
}
printf("\n");

return (0);
}
