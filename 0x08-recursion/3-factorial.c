#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number to calculate the factorial of
 *
 * Return: The factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /* Error: invalid input */
	}
	else if (n == 0)
	{
		return (1); /* Base case: 0! = 1 */
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
