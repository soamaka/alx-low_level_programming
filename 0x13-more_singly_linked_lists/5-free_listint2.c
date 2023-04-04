#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list
 * @head: a pointer to the head of listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *lend;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		lend = *head;
		*head = (*head)->next;
		free(lend);
	}
	*head = NULL;
}
