#include "main.h"

/**
 * print_last_digit - print last digit of a number
 *
 * @n: takes number input
 *
 * Return: lastDigit
*/

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastigit = n % 10;

	-putchar(lastDigit + 'O');
	return (lastDigit);
}
