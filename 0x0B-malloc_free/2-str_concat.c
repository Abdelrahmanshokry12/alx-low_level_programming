#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *str_concat - aaa
 * @s1: a
 * @s2: aaa
 * Return: On success 0
*/
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int len1 = s1 ? strlen(s1) : 0;
	int len2 = s2 ? strlen(s2) : 0;

	concatenated = malloc(len1 + len2 + 1);

	if (concatenated != NULL)
	{
		if (s1 != NULL)
			strcpy(concatenated, s1);
		if (s2 != NULL)
			strcpy(concatenated + len1, s2);
	}

	return (concatenated);
}
