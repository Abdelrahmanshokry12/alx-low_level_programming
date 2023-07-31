#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_node, *fast_node;
	size_t count = 0;

	slow_node = head;
	fast_node = head;

	while (slow_node != NULL && fast_node != NULL && fast_node->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow_node, slow_node->n);
		count++;

		slow_node = slow_node->next;
		fast_node = fast_node->next->next;

		if (slow_node == fast_node)
		{
			slow_node = head;
			while (slow_node != fast_node)
			{
				printf("[%p] %d\n", (void *)slow_node, slow_node->n);
				count++;
				slow_node = slow_node->next;
				fast_node = fast_node->next;
			}
			printf("[%p] %d\n", (void *)slow_node, slow_node->n);
			count++;
			break;
		}
	}

	while (slow_node != NULL)
	{
		printf("[%p] %d\n", (void *)slow_node, slow_node->n);
		count++;
		slow_node = slow_node->next;
	}

	return (count);
}
