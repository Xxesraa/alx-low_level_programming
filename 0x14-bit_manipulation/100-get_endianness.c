#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *endianCheck = (char *)&num;

	/* If the least significant byte is stored first, it's little endian */
	return (*endianCheck == 1 ? 1 : 0);
}

