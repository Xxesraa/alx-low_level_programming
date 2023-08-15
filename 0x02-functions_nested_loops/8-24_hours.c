#include "main.h"

/**
 * jack_bauer - print every minuti of the day
*/

void jack_bauer(void)
{
	int i, j;

	for (j = 0; j <= 23; j++)
	{
		for (i = 0; i <= 59; i++)
		{
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			_putchar(':');
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar('\n');
		}
	}
}

