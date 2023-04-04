#include "lists.h"
/**
 * sum_listint -  a function that returns the sum of all the data of listint_t
 * @head: pointer to the listint_t linked list
 *
 * Return: sum of all the data(n); or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *tem;
	int sum = 0;

	tem = head;
	while (tem != NULL)
	{
		sum += tem->n;
		tem = tem->next;
	}
	return (sum);
}
