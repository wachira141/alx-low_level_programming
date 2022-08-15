#include "lists.h"
/**
 * free_listint2 - func to free
 * @head: head node
 * Return: return value
 */
void free_listint2(listint_t **head)
{
listint_t *hold;

if (head == NULL)
	return;

while (*head != NULL)
{
	hold = *head;
	*head = (*head)->next;
	free(hold);
}
}
