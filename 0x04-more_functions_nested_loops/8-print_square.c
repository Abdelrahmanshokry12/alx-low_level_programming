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
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
