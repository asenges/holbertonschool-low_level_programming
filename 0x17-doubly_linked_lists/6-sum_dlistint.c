#include "lists.h"

/**
 * sum_dlistint - sum elements in the list
 * Return: int
 * @head: dlistint_t ptr
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
