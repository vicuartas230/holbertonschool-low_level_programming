#include "holberton.h"

/**
 * leet - This function encodes a string into 1337
 * @s: The string to encode
 * Return: 0 (Success)
 */

char *leet(char *s)
{
	int m, n;
	char low = "aeotl", upp = "AEOTL", asg = "43071";

	for (m = 0; s[m] != NULL; m++)
	{
		for (n = 0; low[n] && upp[n] != NULL; n++)
		{
			if (s[m] == low[n] || s[m] == upp[n])
			{
				s[m] = asg[n];
				break;
			}
		}
	}
}
