#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node, starting at 0.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - a pointer to the nth node of the list.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	node = head;
	for (i = 0; i < index && node != NULL; i++)
	{
		node = node->next;
	}

	return (node);
}
