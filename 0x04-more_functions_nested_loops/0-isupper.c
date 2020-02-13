#include "holberton.h"

/**
 *_isupper - say if a character is upper case
 *@c: a number that represent an ascii number
 *Return: 1 if is upper case 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
