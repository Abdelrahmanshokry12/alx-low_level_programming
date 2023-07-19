#include "function_pointers.h"
/**
 * array_iterator - applies a function to each element of an array
 * @array: the integer array to iterate over
 * @size: the size of the array
 * @action: a pointer to the function to apply to each element
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
	{
		while (array <= end)
		{
			action(*array++);
		}
	}
}
