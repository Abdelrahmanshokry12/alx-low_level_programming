#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **head)
{
    listint_t *current, *next;
    size_t count = 0;

    if (head == NULL || *head == NULL)
        return (0);

    current = *head;

    while (current != NULL)
    {
        count++;
        next = current->next;
        free(current);
        if (next >= current)
            break;
        current = next;
    }

    *head = NULL;

    return (count);
}
