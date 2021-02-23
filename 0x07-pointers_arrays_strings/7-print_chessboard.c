#include "holberton.h"

/**
 * print_chessboard - This function prints the chessboard
 * @a: The size of board
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	int c, f;

	for (c = 0; c < 8; c++)
	{
		for (f = 0; f < 8; f++)
		{
			_putchar(a[c][f]);
		}
		_putchar('\n');
	}
	
}
