#include "holberton.h"

/**
 * read_textfile - This function reads a text file and
 * prints it to the POSIX standard output.
 * @filename: The name of file to read.
 * @letter: The letters to read.
 * Return: The number of letters read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des, f_d;
	char *b[1024];

	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return(0);
/*		printf("It cannot open to read");*/
	f_d = read(file_des, b, letters);
	close(file_des);
	file_des = open(filename, O_WRONLY);
	if (file_des == -1)
		return (0);
/*		printf("It cannot open to write.");*/
		write(1, b, letters);
	close(file_des);
	return (f_d);
}
