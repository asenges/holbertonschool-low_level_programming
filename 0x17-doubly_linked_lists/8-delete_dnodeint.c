#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: lsit
 * @index: index
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp;

	if (*head)
	{
		tmp = *head;
		while (i < index && (*head)->next)
		{
			tmp = tmp->next;
			i++;
		}
		if (i == index)
		{
			if (i == 0)
				*head = (*head)->next;
			if (tmp->prev)
				tmp->prev->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = tmp->prev;
			tmp->next = NULL;
			tmp->prev = NULL;
			free(tmp);
			return (1);
		}
	}
	return (-1);
}
