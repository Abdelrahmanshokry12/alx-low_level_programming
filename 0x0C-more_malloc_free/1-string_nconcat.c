#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *string_nconcat - aq
 * @s1: q
 * @s2: a
 * @n: z
 * Return: 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, i, j;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
	{
		;
	}
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
	{
		;
	}
	if (n >= s2_len)
	{
		n = s2_len;
	}
	concat = malloc(s1_len + n + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < n && s2[j] != '\0'; j++, i++)
	{
		concat[i] = s2[j];
	}
	concat[i] = '\0';
	return (concat);
}
