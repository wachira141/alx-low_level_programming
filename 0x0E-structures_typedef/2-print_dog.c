#include "dog.h"
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
	d->owner == NULL ? printf("null\n") : printf("%s\n", d->owner);
printf("Age: %f\n", d->age);
}
}