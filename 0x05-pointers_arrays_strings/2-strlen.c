#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of string
*/
int _strlen(char *s)
{
	int coun;

	for (coun = 0; *s != '\0'; s++)
		++coun;
	return (coun);
}
