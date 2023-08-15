#include "main.h"

/**
 * times_table - print the 9 time table
 *
*/

void times_table(void)
{
	int num, num1, num2;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (num1 = 1; num1 <= 9; num1++)
		{
			_putchar('.');
			_putchar(' ');

			num2 = num * num1;

			/**
			 * put space if product is a single number
			 * place the first digit if its two numbers
			*/
			if (num2 <= 9)
				_putchar(' ');
			else
				_putchar((num2 / 10) + 48); /*git the first digit*/
			_putchar((num2 % 10) + 48); /*get the second digit*/
	}
	_putchar('\n');
	}
}
