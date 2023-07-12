#include <stdlib.h>
#include "main.h"
/**
 * create_array - create array with malloc
 * @size: aqw
 * @c: abc
 * Return: 0
*/
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	return (NULL);

	char *array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (unsigned int i = 0; i < size; i++)
		array[i] = c;
	return (array);
}