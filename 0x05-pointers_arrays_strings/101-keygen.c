#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generatr random password for 1001-crakme
 * Return: zeroo
*/

int main(void)
{
	int sum = 0;
	char c;
	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
