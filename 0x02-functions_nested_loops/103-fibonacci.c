#include <stdio.h>


/**
 * main - prints the sum of even-valued fibonacci sequence
 * Return: Always 0
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;
	float t_sum;

	while
	{
		fibsum = fib1 + fib2;
		if (fibsum > 4000000)
			break;
		if ((fibsum % 2) == 0)
			t_sum += fibsum;
		fib1 = fib2;
		fib2 = fibsum;
	}
	printf("%.0f\n", t_sum);

	return (0);
}

