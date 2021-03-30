#include "holberton.h"

/**
 * create_file - This function creates a file.
 * @filename: The name of the file to create.
 * @text_content: The NULL terminate string to write to the file.
 * Return: 1 on success or -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t f_d, fdw;

	if (!filename)
		return (-1);
	f_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f_d == -1)
		return (-1);
	if (text_content)
	{
		fdw = write(f_d, text_content, strlen(text_content));
		if (fdw == -1)
			return (-1);
	}
	close(f_d);
	return (1);
}
