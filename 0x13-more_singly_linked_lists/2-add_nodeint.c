#include "lists.h"
/**
 * add_nodeint - func to add node
 * @head: the head node
 * @n: data to enter to the new node
 * Return: address of new node or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
listint_t *hold;

hold = *head;
new = malloc(sizeof(listint_t));

if (new == NULL)
	return (NULL);

new->n = n;
*head = new;

if (hold == NULL)
	new->next = NULL;

else
	new->next = hold;

return (new);
}
