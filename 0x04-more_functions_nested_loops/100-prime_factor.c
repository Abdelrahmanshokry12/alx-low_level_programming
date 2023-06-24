#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: find and prints the large prime factor
 *
 *Return: Always 0 (success)
*/

int main(void)
{
	long num = 612852475143;
	long largest_factor = 2;

	while (num > largest_factor)
	{
		if (num % largest_factor == 0)
		{
			num /= largest_factor;
		}
		else
		{
			largest_factor++;
		}
	}

	printf("%ld\n", largest_factor);

	return (0);
}
