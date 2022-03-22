#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * pop_listint - free list
 * @head: listint_t ptr ptr
 * Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head;
	n = tmp->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (n);
}
