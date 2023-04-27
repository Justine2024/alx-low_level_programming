#include "main.h"

/**
 * _isupper - check for upper case
 * @x: is the number to be checked
 * Return: 1 for upper lette or 0 for else
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
