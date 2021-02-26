#include "holberton.h"

/**
 * is_prime_number - This function returns 1  if the input integer is a
 * prime number, otherwise return 0.
 * @n: The number to evaluate
 * Return: 0 if n is a prime or 1 if n is not a prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (primes(n, 2));
	}
}

/**
 * primes - This function check if e is a prime number
 * @e: The number to check
 * @c: The number to iterate
 * Return: 1 if e is prime number and 0 if not
 */

int primes(int e, int c)
{
	if (e % c == 0 && e == c)
	{
		return (1);
	}
	else if (e % c == 0 && e != c)
	{
		return (0);
	}
	else
	{
		return (primes(e, c + 1));
	}
}
