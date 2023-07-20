#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - entry point for the program
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 *
 * Return: 0 if successful, 98 if there is an error
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Usage: %s <num1> <operator> <num2>\n", argv[0]);
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (!op_func)
	{
		printf("Error\n"), exit(99);
	}

	if (!b || (argv[2][0] == '/' && b == 0))
	{
		printf("Error\n"), exit(100);
	}

	result = op_func(a, b);
	printf("%d\n", result);
	return (0);
}
