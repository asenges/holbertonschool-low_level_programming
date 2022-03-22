#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * sum_listint - free list
 * @head: listint_t ptr ptri
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int n;

	if (head == NULL)
		return (0);

	n = 0;
	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
