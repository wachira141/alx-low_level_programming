#include "lists.h"
/**
 * insert_nodeint_at_index - nserts a new node
 * @head: head node
 * @idx: index where node to be added
 * @n: the int data
 * Return: return address of new node or Null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *hold;
listint_t *new;
unsigned int i;

if (head == NULL)
	return (NULL);

hold = *head;
for (i = 1; hold && i < idx; i++)
{
hold = hold->next;
if (hold == NULL)
	return (NULL);

}
new = malloc(sizeof(listint_t));
if (!new)
{
	free(new);
return (NULL);
}
new->n = n;
if (idx == 0)
{
	*head = new;
	new->next = hold;
}
else if (hold->next)
{
new->next = hold->next;
hold->next = new;
}
else
{
new->next = NULL;
hold->next = new;
}
return (new);
}
