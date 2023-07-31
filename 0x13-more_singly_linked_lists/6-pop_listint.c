#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - the data (n) of the deleted node.
*/

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
	return (0);

	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (n);
}
