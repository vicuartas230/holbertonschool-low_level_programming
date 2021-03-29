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
	int file_des, f_d, fdw;
	char *b[1024];

	if (!filename)
		return (0);
	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0);
	f_d = read(file_des, b, letters);
	close(file_des);
	file_des = open(filename, O_WRONLY);
	if (file_des == -1)
		return (0);
	fdw = write(1, b, letters);
	if (fdw == -1)
		return (0);
	close(file_des);
	return (f_d);
}
