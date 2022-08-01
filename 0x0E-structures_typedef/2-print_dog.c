#include "dog.h"i
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: dog structure
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
