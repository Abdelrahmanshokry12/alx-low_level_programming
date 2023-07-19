#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: the integer array to search
 * @size: the size of the array
 * @cmp: a pointer to the function to compare integers
 *
 * Return: the index of the first element for which cmp returns nonzero,
 *         or -1 if no such element is found or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size > 0 && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
