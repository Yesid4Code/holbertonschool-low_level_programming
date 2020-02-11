#include "holberton.h"
/**
 *_isalpha - prints
 *@c: number to read ascii
 *Return: always 0 o 1
 */
int _isalpha(int c)
{
if (((c > 64) && (c < 91)) || ((c > 96) && (c < 123)))
return (1);
return (0);
}
