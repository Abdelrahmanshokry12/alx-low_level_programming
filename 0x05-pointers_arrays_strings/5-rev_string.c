#include "main.h"

/**
 * rev_string - reverses a string
 * Params:
 *   @s: string parameter input
 * Return: None
*/

void rev_string(char *s)
{
	int len, i;
	char temp;

	/*find string length without null char*/
	for (len = 0; s[len] != '\0'; ++len)
		;

		for (i = 0; i < len / 2; i++)
		{
			temp = s[i];
			s[i] = s[len - 1 - i];
			s[len - 1 - i] = temp;
		}
}
