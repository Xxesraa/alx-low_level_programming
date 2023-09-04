#include <stdio.h>
#include <stdlib.h>

/**
 * main -  that adds positive numbers
 * @argc: number of commandline argument
 * @argv: pointer to in array of command line argumant
 *
 * Return:  Always 0
*/

int main(int argc, char *argv[])
{
	int i = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		i += atoi(argv[argc]);
	}
	printf("%d\n", i);
	return (0);
}
