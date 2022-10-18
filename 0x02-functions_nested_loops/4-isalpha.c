#include "main.h"

/**
 * _isalpha - to check alphabetic character
 * @c: character to be checked
 * Return: 1  if c is a letter, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		returb (0);
}
