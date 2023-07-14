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
	unsigned int s1_len = 0, s2_len = 0, i, j;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (n >= s2_len)
	{
		n = s2_len;
	}
	concat = malloc(sizeof(char) * (s1_len + n + 1));
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
	result[i] = '\0';
	return (concat);
}
