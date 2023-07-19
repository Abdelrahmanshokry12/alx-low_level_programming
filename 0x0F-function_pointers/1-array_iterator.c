#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - a
 * @array: q
 * @size: a
 * @action: z
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
