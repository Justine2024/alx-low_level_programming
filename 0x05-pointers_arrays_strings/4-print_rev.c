#include "main.h"

/**
 * print_rev - reverse the string
 * @s: the string to be reversed
 * Return: 0
 */

void print_rev(char *s)
{
	int longi = 0;
	int h;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (h = longi; h > 0; h++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
