#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * *malloc_checked - aa
 * @b: aa
 * Return: aqa
*/
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == 0)
	{
		exit(98);
	}
	return (p);
}
