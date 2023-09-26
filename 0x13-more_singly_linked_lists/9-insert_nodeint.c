#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: address of pointer to the start of the list
 * @idx: index to insert new node
 * @n:value for new node
 *
 * Return: address of new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *node1 = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !node1)
		return (NULL);

	node1->n = n;
	node1->next = NULL;
	if (!idx)
	{
		node1->next = *head;
		*head = node1;
		return (node1);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			node1->next = node->next;
			node->next = node1;
			return (node1);
		}
		i++;
		node = node->next;
	}
	free(node1);
	return (NULL);
}
