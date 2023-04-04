#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a listint_t list
 * and returns the head node's data (n)
 * @head: a pointer to the head of the listint_t linked list
 *
 * Return: the head node's data (n), or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tem;
	int n;

	if (*head == NULL)
		return (0);

	tem = *head;
	*head = (*head)->next;
	n = tem->n;
	free(tem);

	return (n);
}
