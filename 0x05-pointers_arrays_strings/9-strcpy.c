#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to(destiny)
 * @src: copy from(source)
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		y++;
	}
	for ( ; x < 1; x++)
	{
		dest[x] = src[x];
	}
	dest[y] = '\0';
	return (dest);
}
