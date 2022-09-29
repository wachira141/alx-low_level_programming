#include "lists.h"
/**
 * print_dlistint - func to print the list
 * @h: the linked list head
 * Return: Return the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
int num = 0;
const dlistint_t *temp = h;

while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
num++;
}
return (num);
}
