#include "main.h"
#include <stdio.h>

/**
 * wildcmp - Compares two strings with wildcards
 * @s1: The first string to compare
 * @s2: The second string to compare, which can contain wildcards
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0')
		{
			return (1); /* Base case: both strings are empty */
		}
		else if (*s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		else
		{
			return (0);
		}
	}
	else if (*s2 == '\0')
	{
		return (0); /* Base case: s2 is empty, s1 is not */
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
