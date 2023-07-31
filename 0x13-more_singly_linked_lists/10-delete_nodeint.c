#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index in a listint_t linked list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @index: The index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if the function succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int i;
    listint_t *node, *prev_node;

    if (head == NULL || *head == NULL)
        return (-1);

    node = *head;

    if (index == 0)
    {
        *head = (*head)->next;
        free(node);
        return (1);
    }

    for (i = 0; i < index && node != NULL; i++)
    {
        prev_node = node;
        node = node->next;
    }

    if (node == NULL)
        return (-1);

    prev_node->next = node->next;
    free(node);

    return (1);
}
