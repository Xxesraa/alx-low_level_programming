#include "lists.h"

/**
 * free_list - that frees a list_t list
 * @head: pointer to head node
 *
 * Return: void
*/

void free_list(list_t *head)
{
	list_t *n, *h;

	if (!head)
		return;

	n = head;
	while (n)
	{
		h = n->next;
		free(n->str);
		free(n);
		n = h;
	}
}
