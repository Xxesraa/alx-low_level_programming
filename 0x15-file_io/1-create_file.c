#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: the string whose length to check
 *
 * Return:integer length of string
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - creates a file.
 * @filename: name of file to create
 * @text_content: text to write
 *
 * Return: 1 on success 0 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int pd;
	ssize_t b = 0, l = _strlen(text_content);

	if (!filename)
		return (-1);
	pd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (pd == -1)
		return (-1);
	if (l)
		b = write(pd, text_content, l);
	close(pd);
	return (b == l ? 1 : -1);
}
