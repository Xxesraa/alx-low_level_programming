#include "variadic_functions.h"

/**
 * sum_them_all -  a function that returns the sum of all its parameters
 * @n: the number of arguments
 * @...: the integers to sum
 *
 * Return: the integer sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int r = 0, i = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		r += va_arg(ap, int);
	va_end(ap);
	return (r);
}
