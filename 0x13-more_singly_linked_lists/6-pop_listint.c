#include "lists.h"
/**
 * pop_listint - func to pop
 * @head: head node
 * Return: return head node or 0
 */
int pop_listint(listint_t **head)
{
listint_t *hold;
int num;

if (*head == NULL)
	return (0);

hold = *head;
num = hold->n;
*head = hold->next;
free(hold);

return (num);
}
