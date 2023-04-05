#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts new node at a given position
 * @head: a pounter to the listint_t linked list
 * @idx: index of the list where the new node should be added
 * @n: integer data for the new node
 *
 * Return: address of the new node; or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *cop = *head;
	unsigned int node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		*head = new_node;
		return (new_node);
	}

	for (new_node = 0; node < (idx - 1); node++)
	{
		if (cop == NULL || cop->next == NULL)
			return (NULL);
	}
	new_node->next = cop->next;
	cop->next = new_node;

	return (new_node);
}
