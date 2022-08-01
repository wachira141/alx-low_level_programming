#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - function initialized
 * @d: dog structure
 * Return: no return value
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
	printf("Name: ");
	d->name == NULL ? printf("null\n") : printf("%s\n", d->name);
	printf("Owner: ");
	d->owner == Null ? printf("null\n") : printf("%s\n", d->owner);
	printf("Age: ");
	d->age == NULL ? printf("null\n") : prinf("%f\n", d->age);
}
}
