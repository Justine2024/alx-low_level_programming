#include "main.h"

/**
 * rot13 - a function to encode a string
 * @s: pointer
 * Return: *s
 */

char *rot13(char *s)
{
	int i, j;
	char data1[] = "ABCDEFGHIJKLMNOPRSTUVWXYZabcdefghijklmnoprstuvwxyz";
	char datarot[] = "NOPRSTUVWXYZABCDEFGHIJKLMnoprstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (s);
}
