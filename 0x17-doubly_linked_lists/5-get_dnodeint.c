#include "lists.h"

/**
 * get_dnodeint_at_index - returns the element in ntx index of the list
 * Return: dlistint_t
 * @head: dlistint_t ptr
 * @index: unsigned int
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

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
