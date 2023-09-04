#include <stdio.h>
/**
 * main - prints the number of arguments passed
 * @argc: number of commandline argument
 * @argv: pointer to in array of command line argumant
 * Return: 0-success, non-zero-fail.
*/
int main(int argc, char argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
