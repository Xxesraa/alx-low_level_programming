#include "main.h"

/**
 * print_square - prints a square Using the character #
 *
 * @size:  is the size of the square
 *
 * Return: always 0 (Success)
*/

void print_square(int size)
{
	int r, c;

	for (r = 1; r <= size; r++)
	{
		for (c = 1; c <= size; c++)
			_putchar('#');
		_putchar('\n');
	}
}
