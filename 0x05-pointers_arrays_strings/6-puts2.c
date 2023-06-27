#include "main.h"

/**
 * _puts2 - prints every other character of a string
 * Params:
 *  @str: string parameter input
 * Return: None
*/

void _puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
