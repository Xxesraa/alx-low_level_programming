#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list
 * @head: address of pointer to the start of the list
 * @str: str field of node
 *
 * Return: size of list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h = malloc(sizeof(list_t));
	list_t *n = *head;

	if (!head || !h)
		return (NULL);
	if (str)
	{
		h->str = strdup(str);
		if (!h->str)
		{
			free(h);
			return (NULL);
		}
		h->len = _strlen(h->str);
	}
	if (n)
	{
		while (n->next)
			n = n->next;
		n->next = h;
	}
	else
		*head = h;
	return (h);
}
