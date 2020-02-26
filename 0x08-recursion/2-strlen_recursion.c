#include "holberton.h"

/**
 * _strlen_recursion - function used to know the length of a string.
 * @s: pointer that references a string.
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int i = 0, count = 0;

	if (s[i])
	{
		i++;
		return ((count + 1) + _strlen_recursion(s + i));
	}
	else
		return (count);
}
