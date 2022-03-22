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
	listint_t *tmp, *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	tmp = *head;
	new->n = n;
	if (idx == 0)
	{	new->next = tmp;
		*head = new;
		return (new);
	}

	i = 0;
	while (i < idx - 1)
	{
		if (!tmp)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
