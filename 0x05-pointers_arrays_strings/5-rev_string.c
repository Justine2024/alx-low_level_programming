#include "main.h"

/**
 * rev_string - reverse the string
 * @s: the string to be reversed
 * Return: string in reverse
 */

void rev_string(char *s)
{
	int counter = 0;
	int h;
	char rev = s[0];

	while (s[counter] != '\0')
		counter++;

	for (h = 0; h < counter; h++)
	{
		counter--;
		rev = s[h];
		s[h] = s[counter];
		s[counter] = rev;
	}
}
