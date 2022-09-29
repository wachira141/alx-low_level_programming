#include "lists.h"
/**
 * dlistint_len - func to print the elem
 * @h: the linked list header
 * Return: return the num of linked list elem
 */
size_t dlistint_len(const dlistint_t *h)
{
int num = 0;
const dlistint_t *temp = h;

while (temp != NULL)
{
temp = temp->next;
num++;
}
return (num);
}
