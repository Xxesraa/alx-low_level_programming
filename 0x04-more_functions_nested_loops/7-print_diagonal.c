#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n:  is the number of times the character \ should be printed
 *
 * Return: always 0 (Success)
*/
void print_diagonal(int n)
{
	int p, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (p = 1; p <= n; p++)
		{
			for (s = 1; s <= p; s++)
				_putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
