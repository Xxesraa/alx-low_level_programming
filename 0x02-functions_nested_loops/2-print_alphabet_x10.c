#include"main.h"

/**
 * print-alphabet_x10 - that will print the alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int line, es;

	for (es = 0; line <= 9; line++)
	{
		for (es = 'a'; es <= 'z'; es++)
			_putchar(es);
		_putchar('\n');
	}
}
