#include "main.h"

/**
 * print_square - prints a square of size `size` using the character #
 *
 * @size: the size of the square to be printed
 *
 * Return: void
*/

void print_square(int size)
{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
		{
			_putchar('#');
		}
			_putchar('\n');
	}
}
