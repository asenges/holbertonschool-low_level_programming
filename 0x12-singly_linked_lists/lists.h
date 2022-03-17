#ifndef LISTSH
#define LISTSH
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
/**
 * struct list - list struct
 * @str: char
 * @len: int
 * @next: pointer to next
 */
typedef struct list
{
	char *str;
	int len;
	struct list *next;

} list_t;

size_t print_list(const list_t *h);
int _putchar(char c);

#endif
