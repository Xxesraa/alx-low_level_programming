#include <sys/stat.h>
#include <sys/types.h>
#include "main.h"

void check_IO_stat(int stat, int fd, char *filename, char mode);

/**
 * main - copies the content of a file to another file.
 * @argc: the argument count
 * @argv: the argument passed
 *
 * Return: 1 on success 0 on failure
*/
int main(int argc, char *argv[])
{
	int s, d, n = 1024, w, cs, cd;
	char buf[1024];

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
	exit(97);
	}
	s = open(argv[1], O_RDONLY);
	check_IO_stat(s, -1, argv[1], 'o');
	d = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC);
	check_IO_stat(d, -1, argv[2], 'w');
	while (n == 1024)
	{
		n = read(s, buf, sizeof(buf));
		if (n == -1)
			check_IO_stat(-1, -1, argv[1], 'o');
		w = write(d, buf, n);
		if (w == -1)
			check_IO_stat(-1, -1, argv[2], 'w');
	}
	cs = close(s);
	check_IO_stat(cs, s, NULL, 'c');
	cd = close(d);
	check_IO_stat(cd, d, NULL, 'c');
	return (0);
}

/**
 * check_IO_stat - check if a file can be opened or closed
 * @stat: file descriptor to be opened
 * @filename: name of filename
 * @mode: closing or opening
 * @fd: file descriptor
 *
 * Return: void
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'c' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'o' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'w' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
