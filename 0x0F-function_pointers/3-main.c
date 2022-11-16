#include "3-calc.h"

/**
 * main - program that perform simple operation
 * @argc: number of argument
 * @argv: array argument
 *
 * Return: always 0 success
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char 0;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(98);
	}

	o = *argv[2];

	if ((0 == '/' || o == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(arg1, arg2);

	printf("%D\n", result);

	return (0);
}
