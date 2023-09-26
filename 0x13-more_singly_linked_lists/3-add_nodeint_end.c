#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: address of pointer to the start of the list
 * @n:value for new node
 *
 * Return: pointer to new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node1 = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !node1)
		return (NULL);

	node1->next = NULL;
	node1->n = n;
	if (!*head)
		*head = node1;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = node1;
	}
	return (node1);
}
