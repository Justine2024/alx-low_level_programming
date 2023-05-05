#include "main.h"

/**
 * reverse_array - a function to reverse arrays
 * @a: array
 * @n: nuber of arrays
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
