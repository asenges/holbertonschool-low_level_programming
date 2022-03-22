#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * add_nodeint - node add
 * @head: listint_t ptr ptr
 * @n: int
 * Return: listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (new);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
