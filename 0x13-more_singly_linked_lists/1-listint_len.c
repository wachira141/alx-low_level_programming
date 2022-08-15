#include "lists.h"
/**
 * listint_t - func to print elem
 * @h: linked list
 * Return: return the num of elem
 */
size_t listint_len(const listint_t *h)
{
size_t elem = 0;

while (h != NULL)
{
elem++;
h = h->next;
}
return (elem);
}
