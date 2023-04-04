#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @index: index of the node
 * @head: pointer to the listint_t linked list
 *
 * Return: pointer to the nth node; or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tem;
	unsigned int i;

	tem = head;
	for (i = 0; i < index && tem != NULL; i++)
		tem = tem->next;

	return (tem);
}
