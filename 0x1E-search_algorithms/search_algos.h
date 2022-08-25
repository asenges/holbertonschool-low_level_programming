#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
/**
 * struct listint_s - single linked list
 * @n: int
 * @index: size_t
 * @next: listint_s struct ptr
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;
/**
 * struct skiplist_s - single linked list
 * @n: int
 * @index: size_t
 * @next: listint_s struct ptr
 * @express: lkistint_s struct ptr
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
#endif
