#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - variadic function
 * Return: void
 * @separator: const char
 * @n: const unsigned int
 * @...: varargs
 *
 * Description:
 * Author: Alex Senges
 * Date: Mar 09, 2022
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *p;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(ap, char*);
		if (p == NULL)
		{
			printf("(nil)");
			continue;
		}

		printf("%s", p);

		if (i == n - 1)
			break;

		if (separator != NULL)
			printf("%s", separator);

	}
	va_end(ap);

	printf("\n");
}

