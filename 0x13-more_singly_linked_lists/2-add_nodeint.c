#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: address of pointer to the start of the list
 * @n: integer
 *
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node1 = malloc(sizeof(listint_t));

	if (!head || !node1)
		return (NULL);

	node1->next = NULL;
	node1->n = n;
	if (*head)
		node1->next = *head;
	*head = node1;
	return (node1);
}
