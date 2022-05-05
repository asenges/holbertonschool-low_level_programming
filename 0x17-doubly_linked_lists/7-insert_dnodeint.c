#include "lists.h"
/**
 * dlistint_len_helper - returns de number of elements in the list
 * Return: size_t
 * @h: const dlistint_t ptr
 */
size_t dlistint_len_helper(const dlistint_t *h)
{
	int n = 0;

	if (!h)
		return (0);

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
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
	size_t list_len = 0;

	new = malloc(sizeof(dlistint_t));
	if (!h || !new)
		return (NULL);

	list_len = dlistint_len_helper(head);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == list_len)
		return (add_dnodeint_end(h, n));

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
			return (new);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
