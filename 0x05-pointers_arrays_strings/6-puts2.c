#include "main.h"

/**
 * puts2 - prints only one character
 * starting with the first one
 * @str: input
 * Return: print output
 */

void puts2(char *str)
{
	int lingi = 0;
	int t = 0;
	char *y = str;
	int h;

	while (*y != '\0')
	{
		y++;
		lingi++;
	}
	t = lingi - 1;
	for (h = 0; h <= t; h++)
	{
		if (h % 2 == 0)
		{
			_putchar(str[h]);
		}
	}
	_putchar('\n');
}
