#include "lists.h"
/**
 * add_nodeint_end - func to add at the end
 * @head: head node
 * @n: the int data
 * Return: new elem or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *end;
listint_t *current;

current = *head;

while (current && current->next != NULL)
	current = current->next;

end = malloc(sizeof(listint_t));
if (end == NULL)
	return (NULL);

end->n = n;
end->next = NULL;

if (current)
	current->next = end;
else
	*head = end;
return (end);
}
