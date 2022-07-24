#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - entry point
 *@n: dereferencing int
 *
 * Return:void
 */
void reset_to_98(int *n)
{
	int *number = n;
	*number = 98;
}
