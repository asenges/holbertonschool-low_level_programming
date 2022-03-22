#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - insert nodeint at index
 * @head: listint_t ptr ptr
 * @index: unsigned int
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *del;

	if ((*head) ==  NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	i = 0;
	while (i < index - 1)
	{
		if (!tmp)
			return (-1);
		tmp = tmp->next;
		i++;
	}
	del = tmp->next;
	tmp->next = del->next;
	free(del);
	return (1);
}
