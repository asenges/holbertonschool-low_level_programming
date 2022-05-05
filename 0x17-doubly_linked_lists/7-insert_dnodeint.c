#include "lists.h"

/**
 * insert_dnodeint_at_index - insert an elements to the list at index
 * Return: dlistint_t
 * @h: dlistint_t double ptr
 * @n: int
 * @idx: unsigned int
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *head = NULL;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	head = *h;
	while (i < idx)
	{
		if (i + 1 == idx)
		{
			new->prev = head;
			new->next = head->next;
			head->next = new;
			head->next->prev = new;
			return (*h);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
