#include "main.h"
/**
 * binary_to_uint -a function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1 b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = strlen(b);
	int i = 0;
	
	if (b == NULL)
	{
		return (0);
	}

	while (i < len)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
		result = result * 2 + (b[i] - '0');
	}

	return (result);
}

