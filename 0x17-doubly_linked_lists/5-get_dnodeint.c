#include "lists.h"
/**
 * get_dnodeint_at_index - func to print nth node
 * @head:head node
 * @index: the index of the node
 * Return: return the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp = head;
unsigned int num = 0;

while (temp)
{
if (index == num)
	return (temp);

num++;
temp = temp->next;
}
return (NULL);
}
