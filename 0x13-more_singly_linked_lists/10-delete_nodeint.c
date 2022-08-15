#include "lists.h"
/**
 * delete_nodeint_at_index - delete node func
 * @head: head node
 * @index: index of node
 * Return: return 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *hold;
listint_t *prev;
unsigned int i = 0;

if (*head == NULL)
	return (-1);

hold = *head;
while (i < index)
{
prev = hold;
hold = hold->next;

if (hold == NULL)
	return (-1);

i++;
}

if (index == 0)
	*head = hold->next;
else if (hold->next)
	prev->next = hold->next;

else
prev->next = NULL;

free(hold);
return (1);

}
