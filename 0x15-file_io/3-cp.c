#include "holberton.h"

/**
 * main - Entry point.
 * @ac: The number of arguments.
 * @av: The arguments like string.
 * Return: 0 (Success)
 */

int main(int ac, char **av)
{
	int rd, c_read, c_write, s, f, wr;
	char b[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f = open(av[1], O_RDONLY);
	if (f == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
		exit(98);
	rd = read(f, b, INT_MAX);
	if (rd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
		exit(98);
	c_read = close(f);
	if (c_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", f),
		exit(100);
	s = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (s == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]),
		exit(99);
	wr = write(s, b, rd);
	if (wr == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]),
		exit(99);
	c_write = close(s);
	if (c_write == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", s),
		exit(100);
	return (0);
}
