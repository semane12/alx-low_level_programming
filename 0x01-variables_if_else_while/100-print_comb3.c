#include <stdio.h>

/**
 * main - print comb3
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 4849; n < 5657; n++)
	{
		putchar(n);
		if (n != 5656)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
