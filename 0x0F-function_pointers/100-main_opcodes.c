#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for the school students
 * @argc: the number of args
 * @argv: argument vector
 *
 * Return: Always 0
*/

int main(int argc, char **argv)
{
	char *p = (char *)main;
	int j;

	if (argc != 2)
		printf("Error\n"), exit(1);
	j = atoi(argv[1]);
	if (j < 0)
		printf("Error\n"), exit(2);

	while (j--)
		printf("%02hhx%s", *p++, j ? " " : "\n");
	return (0);
}
