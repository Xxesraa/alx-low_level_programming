#include "main.h"

/**
 * *_strcpy -  copies the string pointed to by src
 * @dest: that type string
 * @src: that type string
 * Return: Nothing
*/
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
