#include "main.h"

/**
 * puts2 - prints every character of a string
 * Params:
 *  @str: string parameter input
 * Return: None
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		;
	}
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
