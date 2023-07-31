#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @idx: The index of the list where the new node should be added
 * @n: The integer to be added to the new node.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node, *new_node;

	if (head == NULL)
	return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	}
	else
	{
		node = *head;
		for (i = 0; i < idx - 1 && node != NULL; i++)
		{
			node = node->next;
		}
		if (node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->next = node->next;
		node->next = new_node;
	}

	return (new_node);
}