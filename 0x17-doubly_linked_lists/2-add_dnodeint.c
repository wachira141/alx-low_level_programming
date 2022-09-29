#include "lists.h"
/**
 * add_dnodeint - func to add node
 * @head:the head node
 * @n: the elem to add
 * Return: return the address of new elem
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnode;

newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
{
	free(newnode);
	return (NULL);
}
newnode->n = n;
newnode->next = *head;
newnode->prev = NULL;
*head = newnode;

return (newnode);
}
