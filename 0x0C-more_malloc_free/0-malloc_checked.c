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
	void *p = malloc(b);

	if (p == NULL)
	{
		fprintf(stderr, "malloc failed\n");
		exit(98);
	}
	return (p);
}
