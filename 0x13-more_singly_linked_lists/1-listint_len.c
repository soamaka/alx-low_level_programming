#include "lists.h"
/**
 * listint_len - returns no of elements in a linked listint_t list
 * @h: pointer to the listint_t list
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
