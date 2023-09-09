#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to a memory allocated with malloc(old_size)
 * @old_size: size in byte
 * @new_size: size in byte
 *
 * Return: NULL if new_size = 0 and ptr is not NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *o;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p = malloc(new_size);
	if (!p)
		return (NULL);

	o = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p[i] = o[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = o[i];
	}

	free(ptr);
	return (p);
}
