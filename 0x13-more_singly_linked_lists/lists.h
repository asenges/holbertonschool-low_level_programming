#ifndef LISTSH
#define LISTSH
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
/**
 * struct listint - listint struct
 * @n: int
 * @next: pointer to next
 */
typedef struct listint
{
	int n;
	struct listint *next;

} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif
