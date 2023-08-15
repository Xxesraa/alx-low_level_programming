#include "main.h"

/**
 * main - Entry point
 *
 * Description: computes the sum of all
 *		the multiples of 3 or 5
 *		below 1024 (excluded)
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int x, y;

	for (y = 0; y < 1024; y++)
	{
		if ((y % 3 == 0) || (y % 5 == 0))
			x += y;
	}
	printf("%d\n", x);

	return (0);
}
