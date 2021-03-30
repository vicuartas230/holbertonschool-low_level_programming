#include "holberton.h"

/**
 * append_text_to_file - This function appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The terminate NULL string to append.
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t f_d, fdw;

	if (!filename)
		return (-1);
	f_d = open(filename, O_APPEND | O_WRONLY);
	if (f_d == -1)
		return (-1);
	if (text_content)
	{
		fdw = write(f_d, text_content, strlen(text_content));
		if (fdw == -1)
			return (-1);
	}
	else
		if (f_d != -1)
			return (1);
	close(f_d);
	return (1);
}
