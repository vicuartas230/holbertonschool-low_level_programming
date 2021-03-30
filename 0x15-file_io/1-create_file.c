#include "holberton.h"

/**
 * create_file - This function creates a file.
 * @filename: The name of the file to create.
 * @text_content: The NULL terminate string to write to the file.
 * Return: 1 on success or -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int f_d;

	if (!filename)
		return (-1);
	f_d = open(filename, O_CREAT | O_WRONLY, 0600);
	if (f_d == -1)
		return (-1);
	write(f_d, text_content, strlen(text_content));
	close(f_d);
	return (1);
}
