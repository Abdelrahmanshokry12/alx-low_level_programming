#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The sum of all the data (n) of the listint_t list.
*/

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *node;

	sum = 0;
	for (node = head; node != NULL; node = node->next)
	{
		sum += node->n;
	}

	return (sum);
}
