#include <stdio.h>

/**
 * main - print comb3
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 'SOH'; n < 'Y'; n++)
	{
		putchar(n);
		if (n != 'W')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
