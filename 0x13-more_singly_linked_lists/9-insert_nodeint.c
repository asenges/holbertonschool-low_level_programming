#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert nodeint at index
 * @head: listint_t ptr ptr
 * @idx: unsigned int
 * @n: int
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);

	i = 0;
	while (*head)
	{
		if (i == idx)
		{
			tmp = *head;
			(*head)->n = n;
			(*head)->next = tmp->next;
			return (*head);

		}

		*head = (*head)->next;
		i++;
	}
	return (NULL);
}
