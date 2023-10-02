#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file NAME_OF_THE_FILE %s\n"
#define ERR_NOWRITE "Error: Can't write to NAME_OF_THE_FILE %s\n"
#define ERR_NOCLSE "Error: Can't close fd FD_VALUE %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 1 on success 0 on failure
*/

int main(int ac, char **av)
{
	int ff = 0, tf = 0;
	ssize_t b;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	ff = open(av[1], O_RDONLY);

	if (ff == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	tf = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);

	if (tf == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((b = read(ff, buf, READ_BUF_SIZE)) > 0)
		if (write(tf, buf, b) != b)
			dprintf(STDERR_FILENO, ERR_NOREAD, av[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	ff = close(ff);
	tf = close(tf);
	if (tf)
		dprintf(STDERR_FILENO, ERR_NOCLSE, ff), exit(100);
	if (tf)
		dprintf(STDERR_FILENO, ERR_NOCLSE, tf), exit(100);
	return (EXIT_SUCCESS);
}
