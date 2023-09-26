#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to first node
 * @index: index of node to get
 *
 * Return: pointer to node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *i;
	unsigned int n;

	for (i = head, n = 0; i && n < index; i = i->next, n++)
		;
	return (i);
}
