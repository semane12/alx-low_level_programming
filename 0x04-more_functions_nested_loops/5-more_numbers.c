#include "main.h"

/**
 * more_numbers - print 10 times the number fro 0 to 14
 * Return: 0
 */
void more_numbers(void)
{
	int num, a;

		for (a = 0; a <= 9; a++)
		{
			for (num = 0; num <= 14; num++)
			{
				if (num > 9)
				{
					_putchar((num / 10) + '0');
				}
				_putchar((num % 10) + '0');
			}
			_putchar('\n');
		}
}
