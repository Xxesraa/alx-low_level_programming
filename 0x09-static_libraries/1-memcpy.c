#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of src to be copied
 * Return: the pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int it;

	for (it = 0; it < n; it++)
	{
		dest[it] = src[it];
	}
	return (dest);
}
