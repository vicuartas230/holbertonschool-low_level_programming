#include "holberton.h"

/**
 * read_file - This function opens and reads a file.
 * @filename: The name of the file to open.
 * @buffer: The memory space to storage the characters.
 * Return: The number of letter read.
 */

ssize_t read_file(const char *filename, char *buffer)
{
	int f;
	ssize_t rd;

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	rd = read(f, buffer, INT_MAX);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (close(f) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", f);
		exit(100);
	}
	return (rd);
}

/**
 * write_file - This function writes into a file what is stored in a buffer.
 * @filename: The name of the file to write.
 * @buffer: The memory space where is the text.
 * @rd: The number of characters read.
 * Return: The number of characteres written.
 */

void write_file(const char *filename, char *buffer, ssize_t rd)
{
	int s, wr;

	s = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	wr = write(s, buffer, rd);
	if (wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	if (close(s) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", s);
		exit(100);
	}
}

/**
 * main - Entry point.
 * @ac: The number of arguments.
 * @av: The arguments like string.
 * Return: 0 (Success)
 */

int main(int ac, char **av)
{
	int rd;
	char b[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	rd = read_file(av[1], b);
	write_file(av[2], b, rd);
	return (0);
}
