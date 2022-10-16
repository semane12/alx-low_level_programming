#include <stdio.h>

/**
 *main - alphABET
 *
 *Return: 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	purchar('\n');
	return (0);
}
