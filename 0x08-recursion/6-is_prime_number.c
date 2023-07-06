#include "main.h"

/**
 * is_prime_helper - Helper function to check if a number is prime
 * @n: The number to check
 * @i: The current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (n <= 2)
	{
		return ((n == 2) ? 1 : 0); /* Special cases: 0, 1, 2 */
	}
	else if (n % i == 0)
	{
		return (0); /* Found a divisor, n is not prime */
	}
	else if (i * i > n)
	{
		return (1); /* Checked all possible divisors, n is prime */
	}
	else
	{
		return (is_prime_helper(n, i + 1)); /* Continue checking divisors */
	}
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0); /* Special cases: 0, 1 */
	}
	else
	{
		return (is_prime_helper(n, 2)); /* Start checking divisors from 2 */
	}
}
