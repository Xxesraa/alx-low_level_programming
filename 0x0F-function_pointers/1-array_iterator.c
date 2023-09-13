#include "function_pointers.h"

/**
 * array_iterator -  that executes a function given as
 *		a parameter on each element of an array
 * @array: the int arry
 * @size: the array size
 * @action: function pointer
 *
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *e = array + size - 1;

	if (array && size && action)
		while (array <= e)
			action(*array++);
}
