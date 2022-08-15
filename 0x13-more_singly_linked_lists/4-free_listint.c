#include "lists.h"
/**
 * free_listint - func to free mem
 * @head: head node
 * Return: return value
 */
void free_listint(listint_t *head)
{
listint_t *hold;

while (head != NULL)
{
hold = head;
head = head->next;
free(hold);
}
}
