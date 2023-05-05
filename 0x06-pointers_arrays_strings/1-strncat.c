#include "main.h"

/**
 * _strncat - cocatinate two strings
 * using n bytes from src
 * @dest: input1
 * @src: input2
 * @n: input3
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
