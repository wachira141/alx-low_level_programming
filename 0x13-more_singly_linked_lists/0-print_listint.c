#include "lists.h"
/**
 * print_listint - func to print elem
 * @h:the list passed
 * Return: return the num of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t elem;

for (elem = 0; h != NULL; elem++)
{
printf("%d\n", h->n);
h = h->next;
}
return (elem);
}
