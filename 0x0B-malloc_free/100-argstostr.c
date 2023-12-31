#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: the array of arguments
 *
 * Return: a pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++; /* account for the space */
	}
	len++; /* account for the null terminator */

	str = malloc(len * sizeof(char));
	if (str == NULL)
	{
	return (NULL);
	}

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
