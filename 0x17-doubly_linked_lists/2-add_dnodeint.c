#include "lists.h"

/**
 * add_dnodeint - add an elements to the list
 * Return: void
 * @head: const dlistint_t double ptr
 * @n: const int
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (new);
}
