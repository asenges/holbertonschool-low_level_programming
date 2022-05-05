#include "lists.h"

/**
 * add_dnodeint_end - add an elements to the list at the end
 * Return: void
 * @head: const dlistint_t double ptr
 * @n: const int
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tail = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	tail = *head;
	while (tail->next)
	{
		tail = tail->next;
	}
	tail->next = new;
	new->prev = tail;
	return (new);
}
