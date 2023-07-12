#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: a pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, n;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	n = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			n++;
		}
	}
	words = malloc((n + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	for (i = 0, k = 0; i < n; i++)
	{
		while (str[k] == ' ')
			k++;
		for (j = k; str[j] != '\0' && str[j] != ' '; j++)
			;
		words[i] = malloc((j - k + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			while (i-- > 0)
				free(words[i]);
			free(words);
			return (NULL);
		}
		strncpy(words[i], &str[k], j - k);
		words[i][j - k] = '\0';
		k = j;
	}
	words[i] = NULL;
	return (words);
}
