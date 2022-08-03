#include "function_pointers.h"
/**
 * print_name - func to print name
 * @name: name to be printed
 * @f: pointer func as param
 */
void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}
