#include "main.h"

/**
 * main - Entry point
 *
 * Description: print the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int k;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (k = 0; k < 50; k++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (k == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
