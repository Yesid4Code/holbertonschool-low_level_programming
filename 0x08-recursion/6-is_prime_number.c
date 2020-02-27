#include "holberton.h"

/**
 * me_numbero - auxiliar function used to find a prime number.
 * @n: number to discover if its a prime number.
 * @x: number used as a auxiliar.
 * Return: 1 if is prime 0 if it is not.
 */

int me_numbero(int n, int x)
{
	if (n == x)
		return (1);
	else if (n % x == 0)
		return (0);
	else
		return (me_numbero(n, x + 1));
}

/**
 * is_prime_number - function used to find if a number is prime.
 * @n: the number to discover if its a prime number.
 * Return: 1 if it is prime or 0 if it is not.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (me_numbero(n, 2));
}
