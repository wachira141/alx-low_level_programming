#include "lists.h"
/**
 * sum_dlistint - func to sum all data
 * @head:node head
 * Return: return sum or 0 when empty
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *temp = head;

if (head == NULL)
	return (0);

while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
