#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *memset - aa
 * @s: aq
 * @c: za
 * @n: qz
 * Return: s
*/
void *memset(void *s, int c, size_t n)
{
	unsigned char *p = s;
	unsigned char uc = c;

	while (n-- > 0)
	{
		*p++ = uc;
	}

	return (s);
}
/**
 * *_calloc - a
 * @nmemb: q
 * @size: z
 * Return: ptr
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, nmemb * size);
	return (ptr);
}
