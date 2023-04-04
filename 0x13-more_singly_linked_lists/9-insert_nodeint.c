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
	listint_t *tem;
	listint_t *new_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
		return (add_nodeint(head, n));

	tem = *head;
	for (i = 0; i < idx - 1 && tem != NULL; i++)
		tem = tem->next;

	if (tem == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = tem->next;
	tem->next = new_node;

	return (new_node);
}
