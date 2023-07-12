#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *_strdup - aaa
 * @str:; fff
 * Return: 0
*/

char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
		return (NULL);

	duplicate = malloc(strlen(str) + 1);

	if (duplicate != NULL)
		strcpy(duplicate, str);

	return (duplicate);
}
