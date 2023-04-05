#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely
 * @h: A pointer to the head node of the list
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *tmp;
	hash_table_t *ht = NULL;

	if (h == NULL || *h == NULL)
		return (0);

	ht = hash_table_create(1024);
	if (ht == NULL)
		exit(98);

	current = *h;
	while (current != NULL)
	{
		 if (hash_table_get(ht, &current, sizeof(current)) != NULL)
			 break;
		  if (hash_table_set(ht, &current, sizeof(current), "") == 0)
			  exitt(98);

		  tmp = current;
		  current = current->next;
		  free(tmp);
		  count++;
	}

	hash_table_destroy(ht, NULL);
	*h = NULL;

	return (count);
}
