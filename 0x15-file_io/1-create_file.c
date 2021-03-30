#include "holberton.h"

/**
 * create_file - This function creates a file.
 * @filename: The name of the file to create.
 * @text_content: The NULL terminate string to write to the file.
 * Return: 1 on success or -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int f_d, i, fdw;

	for (i = 0; text_content[i] != '\0'; i++)
		;
	if (!filename)
		return (-1);
	if (text_content)
	{
		f_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		if (f_d == -1)
			return (-1);
	}
	else
	{
		f_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		if (f_d == -1)
			return (-1);
		return (0);
	}
	fdw = write(f_d, text_content, i);
	text_content[i] = '\0';
	if (fdw == -1)
		return (-1);
	close(f_d);
	return (1);
}
