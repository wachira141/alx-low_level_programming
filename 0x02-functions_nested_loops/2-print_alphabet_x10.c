#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - print alphabet.
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
int count;
int alphabet;
count = 0;
if (count < 10)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
count++;
_putchar('\n');
}
}
