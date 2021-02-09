#include "holberton.h"

/**
* jack_bauer - This function prints every minute of the day
*
* Return: 0 (success)
*/

void jack_bauer(void)
{
	int s1, s2, m1, m2;

	for (m2 = '0'; m2 < '3'; m2++)
	{

		for (m1 = '0'; m1 <= '9'; m1++)
		{
			if ((m1 + m2) < 102)
			{
				for (s2 = '0'; s2 < '6'; s2++)
				{
					for (s1 = '0'; s1 <= '9'; s1++)
					{
						_putchar(m2);
						_putchar(m1);
						_putchar(':');
						_putchar(s2);
						_putchar(s1);
						_putchar('\n');
					}
					s1 = '0';
				}
				s1 = '0';
				s2 = '0';
			}
		}
		m1 = '0';
	}
}
