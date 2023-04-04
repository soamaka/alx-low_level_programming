#include "lists.h"
/**
 * add_nodeint - adds a new node at he beginning of a listint_t list
 * @head: a pointer to the head of listint_t list
 * @n: integer to be stored in the new node
 *
 * Return: address of the new element; NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
