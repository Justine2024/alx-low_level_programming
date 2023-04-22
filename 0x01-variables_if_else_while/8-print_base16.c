#include <stdio.h>

int main(void)
{
	int i;
	char la;
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (la='a'; la<='f';la++)
	{
		putchar(la);
	}
	putchar('\n');
	return (0);
}

