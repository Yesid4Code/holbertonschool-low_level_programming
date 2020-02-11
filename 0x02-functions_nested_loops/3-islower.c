#include "holberton.h"
/**
 *_islower - return a value if character is lowercase
 *@c: integer to read an ascii
 *Return: always 0
 */
int _islower(int c)
{
if ((c > 96) && (c < 123))
{
return (1);
}
else
{
return (0);
}
}
