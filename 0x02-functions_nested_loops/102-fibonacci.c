#include "main.h"

/**
 * main - Entry point
 *
 * Description: print the first 50 fibonacci number
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	long int a = 1, b = 2, c;

	printf("%ld, %ld", a, b);

	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
