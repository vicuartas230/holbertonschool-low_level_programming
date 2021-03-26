#include "holberton.h"

/**
 * clear_bit - This function sets the value of a bit
 * to 0 at a given index.
 * @n: The number to check.
 * @index: The position in the number where 0 is going to be set.
 * Return: 1 if it worked or -1 if not.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int b[1024], *p, in;
	unsigned int i = 0;

	in = dectobin(n, b);
	p = &(b[in]);
	while (*p != 2)
	{
		if (i == index)
		{
			*(p) = *p & 0;
			break;
		}
		p++;
		i++;
	}
	bintodec(b, n, in);
	return (1);
}

/**
 * dectobin - This function converts a decimal number to binary.
 * @n: The number to convert.
 * @b: The buffer to allocate the number.
 * Return: The last position used in the buffer.
 */

int dectobin(unsigned long int *n, int *b)
{
	int i = 1023;

	*(b + i) = 2;
	i--;
	while (*(n) > 0)
	{
		*(b + i) = *(n) & 1;
		*(n) = *n >> 1;
		i--;
	}
	return (i + 1);
}

/**
 * bintodec - This funtion converts a binary number to decimal.
 * @b: The buffer to read the number allocated.
 * @n: The pointer to the number to change.
 * @pos: The position where the buffer is.
 * Return: Nothing.
 */

void bintodec(int *b, unsigned long int *n, int pos)
{
	int p, i = 0, *ptr;
	unsigned int ac = 0;

	ptr = &(b[pos]);
	while (*(ptr) != 2)
	{
		i++;
		ptr++;
	}
	if (i == 1 && *b == 1)
		p = 1;
	else
		p = _pow(i);
	ptr = &(b[pos]);
	while (*(ptr) != 2)
	{
		if (*(ptr) == 1)
		{
			ac += p;
			ptr++;
			p /= 2;
		}
		else
		{
			p /= 2;
			ptr++;
		}
	}
	*(n) = ac;
}

/**
 * _pow - This function returns the power of a number base 2.
 * @a: The power with base 2 to operate.
 * Return: The result of the operation.
 */

int _pow(int a)
{
	int i = 1, res = 1;

	while (i < a)
	{
		res *= 2;
		i++;
	}
	return (res);
}
