#include "main.h"

/**
 * _strncpy - A function that copies a string
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * iterste througth src array
	 * where if there isno null bytes
	 * among the first n bytes of source
	 * the string placed in dest will not be
	 * null terminated
	*/

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * if the length of source is less than n
	 * write additional nullbytesto dest to
	 * ensure that a total of n bytes is vritton
	*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
