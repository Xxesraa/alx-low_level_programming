#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 * @b: int
 * Return: pointer to the array initialized or NULL
*/

void *malloc_checked(unsigned int b)
{
	int *s = malloc(b);

	if (s == 0)
		exit(98);

	return (s);
}
