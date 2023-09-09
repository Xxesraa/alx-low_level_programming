#include "main.h"

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
	void *s;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		s = malloc(new_size);
		if (s == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)s + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (s);
}
