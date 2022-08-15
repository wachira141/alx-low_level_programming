#include "lists.h"
/**
 * get_nodeint_at_index - unction that returns the nth node
 * @head: head node
 * @index: index of the node
 * Return: nth node or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *hold;
unsigned int i;

hold = head;
if (head == NULL)
	return (NULL);

for (i = 0; i < index && head != NULL; i++)
{
hold = hold->next;
if (hold == NULL)
	return (NULL);
}
return (hold);
}
