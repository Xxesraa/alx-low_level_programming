#include "lists.h"

/**
 * delete_nodeint_at_index - that deletes the node at index
 * @head: address of pointer to the start of the list
 * @index: index of node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *p;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			p->next = node->next;
			free(node);
			return (1);
		}
		i++;
		p = node;
		node = node->next;
	}
	return (-1);
}
