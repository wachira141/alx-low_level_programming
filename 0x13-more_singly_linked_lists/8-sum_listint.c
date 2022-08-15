#include "lists.h"
/**
 * sum_listint - func to rtn sum of all data
 * @head: head node
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *hold;

hold = head;
if (head == NULL)
	return (0);

while (hold != NULL)
{
sum += hold->n;
hold = hold->next;
}
return (sum);
}
