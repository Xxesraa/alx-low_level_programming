#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: address of pointer to the start of the list
 *
 * Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *n, *i;

	if (!head)
		return;

	n = *head;
	while (n)
	{
		i = n;
		n = n->next;
		free(i);
	}
	*head = NULL;
}
