#include <stdio.h>
#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to get the bit from.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at index `index`, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	unsigned long int mask = 1UL << index;

	return ((n & mask) ? 1 : 0);
}
