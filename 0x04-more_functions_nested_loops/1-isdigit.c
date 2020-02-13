#include "holberton.h"

/**
 *_isdigit - check if a character is a digit.
 *@c: represent a number of ascii code
 *Return: 1 y c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
