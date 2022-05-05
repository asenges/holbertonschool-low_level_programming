#include "lists.h"

/**
 * free_dlistint - free the
 * Return: void
 * @head: dlistint_t ptr
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
