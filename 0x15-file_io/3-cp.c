#include "main.h"

/**
 * main - program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 1 on success 0 on failure
*/

int main(int ac, char **av)
{
	int i;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(1);
	}
	i = append_text_to_file(av[1], av[2]);
	printf("-> %i)\n", i);
	return (0);
}
