#include "main.h"

/**
 * numLength - returns the length of string
 *
 * @num: operand number
 *
 * Return: number of digits
*/

int numLength(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}


/**
 * main - Entry point
 *
 * Description:  prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int c, i;
	unsigned long f1 = 1, f2 = 2, sum, m = 100000000, f1o = 0, f2o = 0, sumo = 0;

	for (c = 1; c <= 98; c++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		i = numLength(m) - 1 - numLength(f1);

		while (f1o > 0 && i > 0)
		{
			printf("%d", 0);
			i--;
		}
		printf("%lu", f1);

		sum = (f1 + f2) % m;
		sumo = f1o + f2o + (f1 + f2) / m;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;

		if (c != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
