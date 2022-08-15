#include "lists.h"
/**
 * print_listint_safe - print listint_t
 * @head: head node
 * Return: num of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current;
size_t count;
const listint_t *hold;

current = head;

if (current == NULL)
	exit(98);

count = 0;
while (current != NULL)
{
hold = current;
current = current->next;
count++;
printf("[%p] %d\n", (void *)hold, hold->n);

if (hold < current)
{
printf("-> [%p] %d\n", (void *)current, current->n);
break;
}
}
return (count);
}
