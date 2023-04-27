#include "main.h"

/**
 * main - entry point
 * Return: Alwys 0
 */

void positive_or_nrgative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
