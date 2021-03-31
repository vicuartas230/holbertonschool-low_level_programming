#include "holberton.h"

/**
 * main - Entry point.
 * @ac: The number of arguments.
 * @av: The arguments like string.
 * Return: 0 (Success)
 */

int main(int ac, char **av)
{
	int rd, s, f, wr;
	char b[BUFSIZ];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
		exit(97);
	f = open(av[1], O_RDONLY);
	if (f == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
		exit(98);
	rd = read(f, b, BUFSIZ);
	if (rd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
			close(f),
		exit(98);
	s = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (s == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]),
			close(f),
		exit(99);
	wr = write(s, b, rd);
	if (wr == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]),
			close(f),
			close(s),
		exit(99);
	if (close(f) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f),
		exit(100);
	if (close(s) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", s),
		exit(100);
	return (0);
}
