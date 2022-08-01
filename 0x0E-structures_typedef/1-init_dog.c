#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function to initialize a variable of ty struct dog
 * @dog: structure dog initialized
 * @name: name passed as argument by value
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Always return 0  (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}
