#include "main.h"

/**
 * _isupper - check the char is upper case
 * @c: the character to be checked
 * Return: 0 if upper 1 otherwise;
 */
int _isupper(int c)
{
	if (c < 'A' || c > 'Z')
		return(0);
	else
		return (1);
}
