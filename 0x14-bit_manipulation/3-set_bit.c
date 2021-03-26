#include "holberton.h"

/**
 * set_bit - This function sets the velue of a bit
 * to 1 at a given index.
 * @n: The number to check.
 * @index: The position in the number where 1 is going to be set.
 * Return: 1 if it worked or -1 if not.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int b[2048], *p;
	unsigned int i = 0;

	dectobin(n, b);
	p = &(b[2047]);
	while (*p != 2)
	{
		if (i == index)
		{
			*(p) = *p | 1;
			break;
		}
		p--;
		i++;
	}
	bintodec(b, n);
	return (1);
}

/**
 * dectobin - This function converts a decimal number to binary.
 * @n: The number to convert.
 * @b: The buffer to allocate the number.
 * Return: The last position used in the buffer.
 */

void dectobin(unsigned long int *n, int *b)
{
	int i = 0;

	*(b + i) = 2;
	i++;
	while (i < 2048)
	{
		*(b + i) = 0;
		i++;
	}
	i--;
	while (*(n) > 0)
	{
		*(b + i) = *(n) & 1;
		*(n) = *n >> 1;
		i--;
	}
}

/**
 * bintodec - This funtion converts a binary number to decimal.
 * @b: The buffer to read the number allocated.
 * @n: The pointer to the number to change.
 * Return: Nothing.
 */

void bintodec(int *b, unsigned long int *n)
{
	int i = 0, *ptr;
	unsigned long int ac = 0;

	ptr = &(b[2047]);
	while (*(ptr) != 2)
	{
		if (*(ptr) == 1)
		{
			ac += 1 << i;
			ptr--;
			i++;
		}
		else
		{
			i++;
			ptr--;
		}
	}
	*(n) = ac;
}
