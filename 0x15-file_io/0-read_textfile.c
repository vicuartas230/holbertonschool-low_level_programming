#include "holberton.h"

/**
 * read_textfile - This function reads a text file and
 * prints it to the POSIX standard output.
 * @filename: The name of file to read.
 * @letters: The letters to read.
 * Return: The number of letters read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	ssize_t f_d, fdw;
	char *b;

	if (!filename || letters > SSIZE_MAX)
		return (0);
	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0);
	b = malloc(letters * sizeof(char));
	if (b == NULL)
		return (0);
	f_d = read(file_des, b, letters);
	if (f_d == -1)
		return (0);
	fdw = write(STDOUT_FILENO, b, f_d);
	if (fdw == -1)
		return (0);
	close(file_des);
	free(b);
	return (fdw);
}
