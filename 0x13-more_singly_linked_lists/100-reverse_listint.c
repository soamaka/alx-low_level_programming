#include "lists.h"
/**
 * reverse_listint - reverses a listint_t list
 * @head: a pointer to the head of the list_t list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahea, *bhnd;

	if (head == NULL || *head == NULL)
		return (NULL);

	bhnd = NULL;

	while ((*head)->next != NULL)
	{
		ahea = (*head)->next;
		(*head)->next = bhnd;
		bhnd = *head;
		*head = ahea;
	}
	(*head)->next = bhnd;
	return (*head);
}
