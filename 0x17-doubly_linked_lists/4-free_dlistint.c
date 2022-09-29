#include "lists.h"
/**
 * free_dlistint - func to free space
 * @head:the list head
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *next;
dlistint_t *current = head;

while (current)
{
next = current->next;
free(current);
current = next;
}
}
