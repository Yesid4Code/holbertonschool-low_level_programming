#include "holberton.h"
/**
 *jack_bauer - print all hours of the day.
 *Return: nothing
 */

void jack_bauer(void)
{
  int i, j, la, li, ya, ye;
  for (i = 0; i < 24; i++)
    {
      for (j = 0; j < 60; j++)
	{
	  la = i / 10;
	  li = i % 10;
	  _putchar(la + '0');
	  _putchar(li + '0');
	  _putchar(':');
	  ye = j / 10;
	  ya = j % 10;
	  _putchar(ye + '0');
	  _putchar(ya + '0');
	  _putchar('\n');
	}
    }
}
