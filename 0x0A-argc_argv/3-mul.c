#include <stdio.h>
#include <stdlib.h>

/**
 * main - that multiplies two numbers
 * @argc: number of commandline argument
 * @argv: pointer to in array of command line argumant
 * Return: 0-success, non-zero-fail
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

