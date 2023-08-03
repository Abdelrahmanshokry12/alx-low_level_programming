#include <stdio.h>
#include "main.h"

/**
 * get_endianness - ll
 * @void: aa
 * Return: 1 or 0.
*/

int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	if (*ptr)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
