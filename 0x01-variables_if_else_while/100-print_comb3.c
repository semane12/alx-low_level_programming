#include <stdio.h>

/**
 * main - print comb3
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(n);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
