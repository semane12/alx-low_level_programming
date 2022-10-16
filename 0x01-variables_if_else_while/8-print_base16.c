#include <stdio.h>

/**
 * main - print number in base 16
 *
 * Return: 0
 */
int main(void)
{
	int num;
	char ch;

	for (num = 0; num < 10; num++)
		putchar((mun % 10) + '0');

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
