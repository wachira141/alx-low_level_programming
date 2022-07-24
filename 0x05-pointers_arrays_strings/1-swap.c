#include "main.h"
#include <stdio.h>
/**
 * swap_int - main entry
 * @a: integer 1
 * @b: integer 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
*a = b;
*b = a;
}
