#include "holberton.h"

/**
 * cap_string - This function capitalizes all words of a string
 * @str: The string to capitalize
 * Return: 0 (Success)
 */

char *cap_string(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; ++a)
	{
		if (str[a] == 32 || str[a] == 10 || str[a] == 44 || str[a] == 46 || str[a] == 59 || str[a] == 63 || str[a] == 40 || str[a] == 41 || str[a] == 123 || str[a] == 125 || str[a] == 33 || str[a] == 34)
		{
			if (str[a + 1] >= 'a' && str[a + 1] <= 'z')
			{
				str[a + 1] = str[a + 1] - 32;
			}
		}
		else if (str[a] == 9)
		{
			if (str[a + 1] >= 'a' && str[a + 1] <= 'z')
			{
				str[a] = 32;
				str[a + 1] = str[a + 1] - 32;
			}
		}
		else if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] = str[0] - 32;
		}
	}
	return (str);
}
