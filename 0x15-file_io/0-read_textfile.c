#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to read
 * @letters: number of bytes to read
 *
 * Return: number bytes read/printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int pd;
	ssize_t b;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	pd = open(filename, O_RDONLY);

	if (pd == -1)
		return (0);
	b = read(pd, &buf[0], letters);
	b = write(STDOUT_FILENO, &buf[0], b);
	close(pd);
	return (b);
}
