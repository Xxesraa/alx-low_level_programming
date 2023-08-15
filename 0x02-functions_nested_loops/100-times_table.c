#include "main.h"

/**
 * print_times_table - print time of n
 *
 * @n: takes number input
*/

void print_times_table(int n)
{
	int i, j, z;

	if (n <= 15 && n >= 0)
	{
		for (z = 0; z <= n; ++z)
		{
			_putchar(48);
			for (j = 1; j <= n; ++j)
			{
				_putchar(',');
				_putchar(' ');

				i = z * j;

				if (i <= 9)
					_putchar(' ');
				if (i >= 99)
					_putchar(' ');
				if (i >= 100)
				{
					_putchar((i / 100) + 48);
					_putchar((i / 10) % 10 + 48);
				} else if (i <= 99 && i >= 10)
					_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
			_putchar('\n');
		}
	}
}

