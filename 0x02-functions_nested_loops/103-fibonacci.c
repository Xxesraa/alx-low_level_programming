#include "main.h"

/**
 * main - Entry point
 *
 * Description: print the sum of even-valued
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long i = 0, j = 1, sum;
	float total_sum;

	while (1)
	{
		sum = i + j;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum += sum;

		i = j;
		j = sum;
	}
	printf("%.0f\n", total_sum);
	return (0);
}
