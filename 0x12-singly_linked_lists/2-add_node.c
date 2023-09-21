#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list
 * @head: address of pointer to the start of the list
 * @str: str field of node
 *
 * Return: size of list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *h = malloc(sizeof(list_t));

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

	h->next = *head;
	*head = h;
	return (h);
}
