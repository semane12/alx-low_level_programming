#include "main.h"

/**
 * int _isdigit - check for digit (0 to 9)
 * Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;

	return (y);
}
