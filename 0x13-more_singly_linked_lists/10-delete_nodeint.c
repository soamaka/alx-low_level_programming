#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * @index: index of the node that should be deleted
 * @head: pointer to address of the listint_t list
 *
 * Return: 1 if it succeeded; -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL)
	{
		return (-1);
	}

	listint_t *current;

	current = *head;

	listint_t *previous = NULL;

	for (unsigned int i = 0; current != NULL && index; i++)
	{
		previous = current;
		current = current->next;
	}

	if (current == NULL)
	{
		return (-1);
	}
	if (previous == NULL)
	{
		*head = current->next;
	}
	else
	{
		previous->next = current->next;
	}

	free(current);

	return (-1);
}
