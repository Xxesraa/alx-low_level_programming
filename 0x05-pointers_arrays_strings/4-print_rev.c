#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/
void print_rev(char *s)
{
	int yo = 0;
	int o;

	while (*s != '\0')
	{
		yo++;
		s++;
	}
	s--;
	for (o = yo; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}


