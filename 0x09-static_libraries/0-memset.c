#include "main.h"
/**
 * _memset - unction that fills memory with a constant byte
 * @s: pointer to put the  constant
 * @b: constant
 * @n: max bytes to use
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int it;

	for (it = 0; n > 0; it++, n--)
	{
		s[it] = b;
	}
	return (s);
}
