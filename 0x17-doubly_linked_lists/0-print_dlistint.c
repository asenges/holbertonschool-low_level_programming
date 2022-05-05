#include "lists.h"

/**
 * print_dlistint - print elements in the list
 * Return: size_t
 * @h: const dlistint_t ptr
 */
size_t print_dlistint(const dlistint_t *h)
{
	int n = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
