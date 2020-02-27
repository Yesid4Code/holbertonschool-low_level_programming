#include "holberton.h"

/**
 * strlen_recur - find length of a string.
 * @s: pointer to string to be conunted.
 *
 * Return: the size of the string.
 */

int strlen_recur(char *s)
{
	if (!*s) /* Evalueete if its different to null*/
		return (0);
	else
		return (1 + strlen_recur(s + 1));
}

/**
 * palingo - compare two strings.
 * @s: pointer to a string that is going to be compared.
 * @l: length of s.
 *
 * Return: return palindrome.
 */

int palingo(char *s, int l)
{
	if (l <= 0)
		return (1);
	if (s[0] == s[l - 1])
		return (palingo(s + 1, l - 2));
	else
		return (0);
}

/**
 * is_palindrome - determine if a string is palindrome.
 * @s: The string.
 * Return: 1 if it is palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int l = strlen_recur(s);

	if (l <= 1)
		return (0);
	return (palingo(s, l));
}
