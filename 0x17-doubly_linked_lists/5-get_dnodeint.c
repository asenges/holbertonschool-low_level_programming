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
 * get_dnodeint_at_index - returns the element in ntx index of the list
 * Return: dlistint_t
 * @head: dlistint_t ptr
 * @index: unsigned int
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	size_t list_len = 0;
	const dlistint_t *h = head;

	list_len = dlistint_len_helper(h);
	if (index >= list_len)
		return (NULL);

	if (!head)
		return (NULL);

	while (head->next)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
